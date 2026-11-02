// rea decompile_all
// name: FUN_0065a740
// address: 0x65a740
// body: available
// range: 0x65a740-0x65a860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a740(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = param_1[0x6a];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    iVar5 = param_1[0x13];
    pcVar3 = FUN_0065ac00;
    *(undefined **)(iVar1 + 8) = &DAT_0065a870;
    if (iVar5 == 2) {
      pcVar3 = FUN_0065a950;
    }
    *(code **)(iVar1 + 4) = pcVar3;
    iVar5 = param_1[0x1c];
    if (iVar5 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      _Size = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar4 = (**(code **)(param_1[1] + 4))(param_1,1,_Size);
        *(undefined4 *)(iVar1 + 0x20) = uVar4;
      }
      _memset(*(void **)(iVar1 + 0x20),0,_Size);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_0065a8b0();
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0065bad0;
    *(code **)(iVar1 + 8) = FUN_0065a880;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar5 = 0;
    do {
      _memset(*(void **)(iVar2 + iVar5 * 4),0,0x1000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

