// rea decompile_all
// name: FUN_00485c79
// address: 0x485c79
// body: available
// range: 0x485c79-0x485da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485c79(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  bool bVar4;
  
  puVar1 = (undefined4 *)(**(code **)unaff_ESI[1])();
  unaff_ESI[0x69] = (int)puVar1;
  *puVar1 = FUN_0041f3a2;
  iVar2 = unaff_ESI[10];
  if (iVar2 == 1) {
    bVar4 = unaff_ESI[9] == 1;
LAB_00485cc3:
    if (!bVar4) {
LAB_00485cc5:
      *(undefined4 *)(*unaff_ESI + 0x14) = 10;
      (**(code **)*unaff_ESI)();
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 4) {
        bVar4 = unaff_ESI[9] == 3;
      }
      else {
        if (5 < iVar2) goto LAB_00485cb9;
        bVar4 = unaff_ESI[9] == 4;
      }
      goto LAB_00485cc3;
    }
LAB_00485cb9:
    if (unaff_ESI[9] < 1) goto LAB_00485cc5;
  }
  iVar2 = unaff_ESI[0xb];
  if (iVar2 == 1) {
    iVar2 = 1;
    unaff_ESI[0x19] = 1;
    if ((unaff_ESI[10] == 1) || (unaff_ESI[10] == 3)) {
      puVar1[1] = FUN_00485ad7;
      if (1 < unaff_ESI[9]) {
        iVar3 = 0x54;
        do {
          *(undefined1 *)(iVar3 + 0x30 + unaff_ESI[0x31]) = 0;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < unaff_ESI[9]);
      }
      goto LAB_00485d8d;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = unaff_ESI[10];
    unaff_ESI[0x19] = 3;
    if (iVar2 == 3) {
      puVar1[1] = FUN_0048596a;
      goto LAB_00485d10;
    }
    if (iVar2 == 1) {
      puVar1[1] = FUN_00485afa;
      goto LAB_00485d8d;
    }
    bVar4 = iVar2 == 2;
LAB_00485d1c:
    if (bVar4) goto LAB_00485cee;
  }
  else {
    if (iVar2 == 4) {
      unaff_ESI[0x19] = 4;
      if (unaff_ESI[10] != 5) {
        bVar4 = unaff_ESI[10] == 4;
        goto LAB_00485d1c;
      }
      puVar1[1] = FUN_00485b4c;
LAB_00485d10:
      FUN_004858ba();
      goto LAB_00485d8d;
    }
    if (iVar2 == unaff_ESI[10]) {
      unaff_ESI[0x19] = unaff_ESI[9];
LAB_00485cee:
      puVar1[1] = FUN_00485a71;
      goto LAB_00485d8d;
    }
  }
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x1b;
  (**(code **)*unaff_ESI)();
LAB_00485d8d:
  if (*(char *)((int)unaff_ESI + 0x4a) == '\0') {
    unaff_ESI[0x1a] = unaff_ESI[0x19];
    return;
  }
  unaff_ESI[0x1a] = 1;
  return;
}

