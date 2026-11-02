// rea decompile_all
// name: FUN_004991b0
// address: 0x4991b0
// body: available
// range: 0x4991b0-0x499357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004991b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_004b0b90(0,param_1,param_2);
  DVar4 = timeGetTime();
  if ((DAT_00c8a644 <= DVar4) || (DVar4 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar4;
  }
  if ((((*(int *)(*(int *)(in_ECX + 0x14) + 0xf4) + 100U < DVar4) &&
       (cVar2 = FUN_006d01e0(local_10,local_c,1), cVar2 != '\0')) &&
      (iVar1 = *(int *)(*(int *)(in_ECX + 0x14) + 0xd8), iVar1 != 0)) &&
     (((*(int *)(iVar1 + 8) != 0 && (*(char *)(*(int *)(in_ECX + 0x14) + 200) == '\0')) &&
      ((iVar1 = *(int *)(*(int *)(in_ECX + 0x14) + 0xdc), iVar1 == 0 ||
       ((*(byte *)(iVar1 + 0x68) & 2) == 0)))))) {
    uVar5 = FUN_004adf20();
    FUN_00498ce0(uVar5);
  }
  FUN_00499480(DVar4,param_1,param_2,local_10,local_c);
  uVar3 = FUN_004997c0(DVar4,local_10,local_c);
  iVar1 = *(int *)(in_ECX + 0x14);
  if (*(int *)(iVar1 + 0x70) == 0) {
    if (((*(byte *)(iVar1 + 0x68) & 2) == 0) ||
       ((cVar2 = FUN_00497d00(), cVar2 == '\0' &&
        ((*(int *)(iVar1 + 0xdc) == 0 || (cVar2 = FUN_00497cd0(), cVar2 == '\0')))))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = FUN_00497c80();
  }
  local_18 = CONCAT31((int3)((uint)iVar1 >> 8),cVar2);
  if (((*(char *)(*(int *)(in_ECX + 0x14) + 199) != '\0') &&
      (*(char *)(*(int *)(in_ECX + 0x14) + 0xc4) != '\0')) && (cVar2 == '\0')) {
    FUN_004973b0(0,1);
    return;
  }
  FUN_00499360(DVar4,*(undefined1 *)(in_ECX + 0x38),uVar3,local_18,local_10,local_c);
  return;
}

