// rea decompile_all
// name: FUN_006261c0
// address: 0x6261c0
// body: available
// range: 0x6261c0-0x626384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006261c0(int *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int *in_ECX;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint local_48;
  void *local_34 [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d788;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX == param_1) {
    uVar3 = FUN_006375e0(param_1);
    local_8 = 0;
    FUN_006261c0(uVar3);
    FID_conflict__free(local_34[0]);
  }
  else {
    cVar2 = FUN_006263f0(local_14);
    if (cVar2 == '\0') {
      cVar2 = FUN_006263f0();
      if (cVar2 == '\0') {
        iVar4 = in_ECX[6];
        if (in_ECX[6] < param_1[6]) {
          iVar4 = param_1[6];
        }
        in_ECX[6] = iVar4 + 1;
        uVar5 = (iVar4 + 1 >> 5) + 1;
        puVar6 = (uint *)FUN_006264b0(uVar5);
        piVar7 = (int *)*param_1;
        if (piVar7 == (int *)0x0) {
          piVar7 = param_1 + 1;
        }
        uVar10 = 0;
        if (uVar5 != 0) {
          local_48 = 0;
          iVar4 = (int)piVar7 - (int)puVar6;
          do {
            uVar8 = local_48 + *puVar6;
            local_48 = (uint)CARRY4(local_48,*puVar6);
            if (uVar10 < (uint)param_1[5]) {
              puVar1 = (uint *)(iVar4 + (int)puVar6);
              bVar11 = CARRY4(uVar8,*puVar1);
              uVar8 = uVar8 + *puVar1;
              local_48 = local_48 + bVar11;
            }
            *puVar6 = uVar8;
            uVar10 = uVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar10 < uVar5);
        }
        piVar7 = (int *)*in_ECX;
        if (piVar7 == (int *)0x0) {
          piVar7 = in_ECX + 1;
        }
        iVar4 = in_ECX[6] >> 5;
        if (-1 < iVar4) {
LAB_00626346:
          uVar5 = piVar7[iVar4];
          if (uVar5 == 0) goto code_r0x0062634d;
          iVar9 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          iVar9 = iVar4 * 0x20 + iVar9;
          goto LAB_00626355;
        }
LAB_00626352:
        iVar9 = -1;
LAB_00626355:
        in_ECX[6] = iVar9;
      }
      else {
        iVar4 = FUN_006257b0(param_1);
        if (iVar4 < 0) {
          FUN_006375e0(in_ECX);
          local_8 = 2;
          FUN_00626390();
          FUN_006374e0(param_1);
          FUN_00625fb0(local_34);
          FID_conflict__free(local_34[0]);
        }
        else {
          FUN_00626390();
          FUN_00625fb0(param_1);
          FUN_00626390();
        }
      }
    }
    else {
      uVar3 = FUN_006259e0(local_34);
      local_8 = 1;
      FUN_00625fb0(uVar3);
      FID_conflict__free(local_34[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x0062634d:
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) goto LAB_00626352;
  goto LAB_00626346;
}

