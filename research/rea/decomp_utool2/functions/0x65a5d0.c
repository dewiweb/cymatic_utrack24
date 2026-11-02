// rea decompile_all
// name: FUN_0065a5d0
// address: 0x65a5d0
// body: available
// range: 0x65a5d0-0x65a712 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x65a70b to 0x65a8b0 FUN_0065a8b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a5d0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x6a] = (int)puVar1;
  *puVar1 = FUN_0065a740;
  puVar1[3] = FUN_0065a720;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (in_ECX[0x19] != 3) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x2f;
    (**(code **)*in_ECX)();
  }
  uVar2 = (**(code **)in_ECX[1])();
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(in_ECX[1] + 4))();
    *(undefined4 *)(iVar3 + puVar1[6]) = uVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)in_ECX + 0x5a) == '\0') {
    puVar1[4] = 0;
  }
  else {
    iVar3 = in_ECX[0x15];
    if (iVar3 < 8) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x38;
      *(undefined4 *)(*in_ECX + 0x18) = 8;
      (**(code **)*in_ECX)();
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x39;
      *(undefined4 *)(*in_ECX + 0x18) = 0x100;
      (**(code **)*in_ECX)();
    }
    uVar2 = (**(code **)(in_ECX[1] + 8))();
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (in_ECX[0x13] != 0) {
    in_ECX[0x13] = 2;
  }
  if (in_ECX[0x13] == 2) {
    uVar2 = (**(code **)(in_ECX[1] + 4))();
    puVar1[8] = uVar2;
    FUN_0065a8b0();
    return;
  }
  return;
}

