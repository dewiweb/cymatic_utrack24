// rea decompile_all
// name: FUN_005eae90
// address: 0x5eae90
// body: available
// range: 0x5eae90-0x5eaf66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eae90(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[4] <= *param_1 + 4) {
    iVar1 = FUN_004c553b(param_1[2],param_1[4] + 0x100);
    param_1[4] = param_1[4] + 0x100;
    param_1[2] = iVar1;
    param_1[3] = *param_1 + iVar1;
  }
  param_2 = param_2 & *(uint *)(&DAT_00b8a898 + param_3 * 4);
  uVar2 = param_3 + param_1[1];
  *(byte *)param_1[3] = *(byte *)param_1[3] | (char)param_2 << ((byte)param_1[1] & 0x1f);
  if ((((7 < (int)uVar2) &&
       (*(char *)(param_1[3] + 1) = (char)(param_2 >> (8U - (char)param_1[1] & 0x1f)),
       0xf < (int)uVar2)) &&
      (*(char *)(param_1[3] + 2) = (char)(param_2 >> (0x10U - (char)param_1[1] & 0x1f)),
      0x17 < (int)uVar2)) &&
     (*(char *)(param_1[3] + 3) = (char)(param_2 >> (0x18U - (char)param_1[1] & 0x1f)),
     0x1f < (int)uVar2)) {
    if (param_1[1] == 0) {
      *(undefined1 *)(param_1[3] + 4) = 0;
    }
    else {
      *(char *)(param_1[3] + 4) = (char)(param_2 >> (0x20U - (char)param_1[1] & 0x1f));
    }
  }
  iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  *param_1 = *param_1 + iVar1;
  param_1[3] = param_1[3] + iVar1;
  param_1[1] = uVar2 & 7;
  return;
}

