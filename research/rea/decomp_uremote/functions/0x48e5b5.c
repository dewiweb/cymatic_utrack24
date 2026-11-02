// rea decompile_all
// name: FUN_0048e5b5
// address: 0x48e5b5
// body: available
// range: 0x48e5b5-0x48e6be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48e6b7 to 0x48e3fa FUN_0048e3fa (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e5b5(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  
  puVar1 = (undefined4 *)(**(code **)unaff_ESI[1])();
  unaff_ESI[0x6a] = (int)puVar1;
  iVar3 = 0;
  *puVar1 = FUN_0048e4a6;
  puVar1[3] = &LAB_0048e5a6;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (unaff_ESI[0x19] != 3) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x2f;
    (**(code **)*unaff_ESI)();
  }
  uVar2 = (**(code **)unaff_ESI[1])();
  puVar1[6] = uVar2;
  do {
    uVar2 = (**(code **)(unaff_ESI[1] + 4))();
    *(undefined4 *)(puVar1[6] + iVar3) = uVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)unaff_ESI + 0x5a) == '\0') {
    puVar1[4] = 0;
  }
  else {
    iVar3 = unaff_ESI[0x15];
    if (iVar3 < 8) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x38;
      *(undefined4 *)(*unaff_ESI + 0x18) = 8;
      (**(code **)*unaff_ESI)();
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x39;
      *(undefined4 *)(*unaff_ESI + 0x18) = 0x100;
      (**(code **)*unaff_ESI)();
    }
    uVar2 = (**(code **)(unaff_ESI[1] + 8))();
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (unaff_ESI[0x13] != 0) {
    unaff_ESI[0x13] = 2;
  }
  if (unaff_ESI[0x13] == 2) {
    uVar2 = (**(code **)(unaff_ESI[1] + 4))();
    puVar1[8] = uVar2;
    FUN_0048e3fa();
    return;
  }
  return;
}

