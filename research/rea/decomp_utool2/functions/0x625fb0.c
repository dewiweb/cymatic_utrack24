// rea decompile_all
// name: FUN_00625fb0
// address: 0x625fb0
// body: available
// range: 0x625fb0-0x6261be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00625fb0(undefined4 *param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  uint local_48;
  undefined4 *local_38;
  void *local_34 [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d74b;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (in_ECX == param_1) {
    FID_conflict__free((void *)*in_ECX);
    *in_ECX = 0;
    in_ECX[5] = 4;
    in_ECX[6] = 0xffffffff;
    *(undefined1 *)(in_ECX + 7) = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
  }
  else {
    cVar2 = FUN_006263f0(uVar3);
    if (cVar2 == '\0') {
      cVar2 = FUN_006263f0(uVar3);
      if (cVar2 == '\0') {
        iVar5 = FUN_006257b0(param_1);
        if (iVar5 < 0) {
          FUN_006375e0(param_1);
          local_8 = 1;
          FUN_00626540(local_34);
          FUN_00625fb0(local_34);
          FUN_00626390();
          FID_conflict__free(local_34[0]);
        }
        else {
          iVar5 = FUN_00637300();
          iVar6 = FUN_00637300();
          puVar7 = (uint *)*in_ECX;
          if (puVar7 == (uint *)0x0) {
            puVar7 = in_ECX + 1;
          }
          local_38 = (undefined4 *)*param_1;
          if (local_38 == (undefined4 *)0x0) {
            local_38 = param_1 + 1;
          }
          uVar3 = 0;
          if (iVar5 >> 5 != -1) {
            iVar10 = (int)local_38 - (int)puVar7;
            local_48 = 0;
            do {
              bVar11 = false;
              uVar8 = local_48;
              if (uVar3 < (iVar6 >> 5) + 1U) {
                puVar1 = (uint *)(iVar10 + (int)puVar7);
                bVar11 = CARRY4(local_48,*puVar1);
                uVar8 = local_48 + *puVar1;
              }
              if ((bVar11) || (*puVar7 < uVar8)) {
                local_48 = 1;
              }
              else {
                local_48 = 0;
              }
              *puVar7 = *puVar7 - uVar8;
              uVar3 = uVar3 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar3 < (iVar5 >> 5) + 1U);
          }
          puVar9 = (undefined4 *)*in_ECX;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = in_ECX + 1;
          }
          iVar5 = (int)in_ECX[6] >> 5;
          if (-1 < iVar5) {
LAB_00626180:
            uVar3 = puVar9[iVar5];
            if (uVar3 == 0) goto code_r0x00626187;
            iVar6 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            iVar6 = iVar5 * 0x20 + iVar6;
            goto LAB_0062618f;
          }
LAB_0062618c:
          iVar6 = -1;
LAB_0062618f:
          in_ECX[6] = iVar6;
        }
      }
      else {
        FUN_00626390();
        FUN_006261c0(param_1);
        FUN_00626390();
      }
    }
    else {
      uVar4 = FUN_006259e0(local_34);
      local_8 = 0;
      FUN_006261c0(uVar4);
      FID_conflict__free(local_34[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x00626187:
  iVar5 = iVar5 + -1;
  if (iVar5 < 0) goto LAB_0062618c;
  goto LAB_00626180;
}

