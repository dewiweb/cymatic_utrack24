// rea decompile_all
// name: FUN_00459640
// address: 0x459640
// body: available
// range: 0x459640-0x459782 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00459698) */
/* WARNING: Removing unreachable block (ram,0x004596a6) */

longlong FUN_00459640(undefined1 *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  bool bVar6;
  longlong lVar7;
  int local_14;
  
  local_14 = param_3;
  if ((param_3 < 0) || ((param_3 < 1 && (param_2 == 0)))) {
    return 0;
  }
  lVar3 = 0;
  do {
    do {
      lVar7 = FUN_0045abc0();
      if (lVar7 < 1) {
        pcVar1 = *(code **)(*in_ECX + 0x1c);
        if (pcVar1 == FUN_00459790) {
          pcVar1 = *(code **)(*in_ECX + 0x18);
          if ((pcVar1 == FUN_00412fb0) || (iVar5 = (*pcVar1)(), iVar5 == -1)) {
            uVar4 = 0xffffffff;
          }
          else {
            *(int *)in_ECX[0xb] = *(int *)in_ECX[0xb] + -1;
            pbVar2 = *(byte **)in_ECX[7];
            *(byte **)in_ECX[7] = pbVar2 + 1;
            uVar4 = (uint)*pbVar2;
          }
        }
        else {
          uVar4 = (*pcVar1)();
        }
        if (uVar4 == 0xffffffff) {
          return lVar3;
        }
        *param_1 = (char)uVar4;
        param_1 = param_1 + 1;
        lVar3 = lVar3 + 1;
        bVar6 = param_2 != 0;
        param_2 = param_2 - 1;
        local_14 = local_14 + -1 + (uint)bVar6;
      }
      else {
        if (CONCAT44(local_14,param_2) < lVar7) {
          lVar7 = CONCAT44(local_14,param_2);
        }
        uVar4 = (uint)lVar7;
        if (uVar4 != 0) {
          FUN_004c2c30(param_1,*(undefined4 *)in_ECX[7],uVar4);
        }
        param_1 = param_1 + uVar4;
        lVar3 = lVar7 + lVar3;
        bVar6 = param_2 < uVar4;
        param_2 = param_2 - uVar4;
        local_14 = (local_14 - (int)((ulonglong)lVar7 >> 0x20)) - (uint)bVar6;
        *(int *)in_ECX[0xb] = *(int *)in_ECX[0xb] - uVar4;
        *(int *)in_ECX[7] = *(int *)in_ECX[7] + uVar4;
      }
    } while (0 < local_14);
    if (local_14 < 0) {
      return lVar3;
    }
  } while (param_2 != 0);
  return lVar3;
}

