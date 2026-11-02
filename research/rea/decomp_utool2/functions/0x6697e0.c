// rea decompile_all
// name: FUN_006697e0
// address: 0x6697e0
// body: available
// range: 0x6697e0-0x6698d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006697e0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = in_ECX[5];
  if (((iVar2 == 0xcd) || (iVar2 == 0xce)) && ((char)in_ECX[0x10] == '\0')) {
    if ((uint)in_ECX[0x1e] < (uint)in_ECX[0x18]) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x43;
      (**(code **)*in_ECX)();
    }
    (**(code **)(in_ECX[0x60] + 4))();
    in_ECX[5] = 0xd2;
  }
  else if (iVar2 == 0xcf) {
    in_ECX[5] = 0xd2;
  }
  else if (iVar2 != 0xd2) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
  }
  cVar1 = *(char *)(in_ECX[100] + 0x11);
  while (cVar1 == '\0') {
    iVar2 = (**(code **)in_ECX[100])();
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = *(char *)(in_ECX[100] + 0x11);
  }
  (**(code **)(in_ECX[6] + 0x18))();
  if (in_ECX[1] != 0) {
    (**(code **)(in_ECX[1] + 0x24))();
    if ((char)in_ECX[4] != '\0') {
      in_ECX[5] = 200;
      in_ECX[0x43] = 0;
      return 1;
    }
    in_ECX[5] = 100;
  }
  return 1;
}

