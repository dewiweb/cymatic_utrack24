// rea decompile_all
// name: FUN_00601df0
// address: 0x601df0
// body: available
// range: 0x601df0-0x601f04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00601df0(uint *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 local_40c [4];
  int local_408 [256];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar7 = *param_1;
  if (param_2 == 0) {
    piVar9 = (int *)param_1[3];
  }
  else {
    iVar4 = 0;
    if (0 < (int)uVar7) {
      if (7 < uVar7) {
        puVar2 = (undefined1 *)param_1[3];
        iVar1 = uVar7 * 4;
        iVar6 = uVar7 - 1;
        uVar7 = *param_1;
        if ((puVar2 + iVar6 * 4 < local_408) || (local_40c + iVar1 < puVar2)) {
          uVar5 = uVar7 & 0x80000007;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
          }
          lVar8 = SUB168(ZEXT416(2),0);
          do {
            piVar9 = (int *)(puVar2 + iVar4 * 4);
            iVar1 = piVar9[1];
            iVar6 = piVar9[2];
            iVar3 = piVar9[3];
            local_408[iVar4] = *piVar9 + (param_2 << lVar8);
            local_408[iVar4 + 1] = iVar1 + (param_2 << lVar8);
            local_408[iVar4 + 2] = iVar6 + (param_2 << lVar8);
            local_408[iVar4 + 3] = iVar3 + (param_2 << lVar8);
            piVar9 = (int *)(puVar2 + iVar4 * 4 + 0x10);
            iVar1 = piVar9[1];
            iVar6 = piVar9[2];
            iVar3 = piVar9[3];
            local_408[iVar4 + 4] = *piVar9 + (param_2 << lVar8);
            local_408[iVar4 + 5] = iVar1 + (param_2 << lVar8);
            local_408[iVar4 + 6] = iVar6 + (param_2 << lVar8);
            local_408[iVar4 + 7] = iVar3 + (param_2 << lVar8);
            iVar4 = iVar4 + 8;
          } while (iVar4 < (int)(uVar7 - uVar5));
        }
      }
      if (iVar4 < (int)uVar7) {
        uVar5 = param_1[3];
        do {
          local_408[iVar4] = *(int *)(uVar5 + iVar4 * 4) + param_2 * 4;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar7);
      }
    }
    piVar9 = local_408;
    local_408[uVar7] = 0;
  }
  FUN_00601f10(piVar9,uVar7,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

