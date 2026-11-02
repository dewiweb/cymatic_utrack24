// rea decompile_all
// name: FUN_004820b4
// address: 0x4820b4
// body: available
// range: 0x4820b4-0x48224b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004820b4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  if ((((unaff_ESI[8] == 0) || (unaff_ESI[7] == 0)) || (unaff_ESI[0xf] < 1)) || (unaff_ESI[9] < 1))
  {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x20;
    (**(code **)*unaff_ESI)();
  }
  if ((0xffdc < unaff_ESI[8]) || (0xffdc < unaff_ESI[7])) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x29;
    *(undefined4 *)(*unaff_ESI + 0x18) = 0xffdc;
    (**(code **)*unaff_ESI)();
  }
  if (unaff_ESI[0xe] != 8) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xf;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0xe];
    (**(code **)*unaff_ESI)();
  }
  if (10 < unaff_ESI[0xf]) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0xf];
    *(undefined4 *)(*unaff_ESI + 0x1c) = 10;
    (**(code **)*unaff_ESI)();
  }
  unaff_ESI[0x36] = 1;
  unaff_ESI[0x37] = 1;
  if (0 < unaff_ESI[0xf]) {
    piVar4 = (int *)(unaff_ESI[0x11] + 0xc);
    do {
      if (((piVar4[-1] < 1) || (4 < piVar4[-1])) || ((*piVar4 < 1 || (4 < *piVar4)))) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x12;
        (**(code **)*unaff_ESI)();
      }
      iVar1 = unaff_ESI[0x36];
      if (unaff_ESI[0x36] <= piVar4[-1]) {
        iVar1 = piVar4[-1];
      }
      unaff_ESI[0x36] = iVar1;
      iVar1 = unaff_ESI[0x37];
      if (unaff_ESI[0x37] <= *piVar4) {
        iVar1 = *piVar4;
      }
      iVar3 = iVar3 + 1;
      unaff_ESI[0x37] = iVar1;
      piVar4 = piVar4 + 0x15;
    } while (iVar3 < unaff_ESI[0xf]);
  }
  iVar3 = 0;
  if (0 < unaff_ESI[0xf]) {
    puVar5 = (undefined4 *)(unaff_ESI[0x11] + 0x24);
    do {
      puVar5[-8] = iVar3;
      *puVar5 = 8;
      uVar2 = FUN_0048e6bf();
      puVar5[-2] = uVar2;
      uVar2 = FUN_0048e6bf();
      puVar5[-1] = uVar2;
      uVar2 = FUN_0048e6bf();
      puVar5[1] = uVar2;
      uVar2 = FUN_0048e6bf();
      puVar5[2] = uVar2;
      *(undefined1 *)(puVar5 + 3) = 1;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 0x15;
    } while (iVar3 < unaff_ESI[0xf]);
  }
  iVar3 = FUN_0048e6bf();
  unaff_ESI[0x38] = iVar3;
  return;
}

