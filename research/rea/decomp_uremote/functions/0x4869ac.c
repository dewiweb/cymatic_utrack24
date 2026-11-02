// rea decompile_all
// name: FUN_004869ac
// address: 0x4869ac
// body: available
// range: 0x4869ac-0x486b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004869ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  if ((0xffdc < unaff_ESI[8]) || (0xffdc < unaff_ESI[7])) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x29;
    *(undefined4 *)(*unaff_ESI + 0x18) = 0xffdc;
    (**(code **)*unaff_ESI)();
  }
  if (unaff_ESI[0x30] != 8) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0xf;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0x30];
    (**(code **)*unaff_ESI)();
  }
  if (10 < unaff_ESI[9]) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[9];
    *(undefined4 *)(*unaff_ESI + 0x1c) = 10;
    (**(code **)*unaff_ESI)();
  }
  iVar3 = 0;
  unaff_ESI[0x44] = 1;
  unaff_ESI[0x45] = 1;
  if (0 < unaff_ESI[9]) {
    piVar4 = (int *)(unaff_ESI[0x31] + 0xc);
    do {
      if ((((piVar4[-1] < 1) || (4 < piVar4[-1])) || (*piVar4 < 1)) || (4 < *piVar4)) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x12;
        (**(code **)*unaff_ESI)();
      }
      iVar1 = unaff_ESI[0x44];
      if (unaff_ESI[0x44] <= piVar4[-1]) {
        iVar1 = piVar4[-1];
      }
      unaff_ESI[0x44] = iVar1;
      iVar1 = unaff_ESI[0x45];
      if (unaff_ESI[0x45] <= *piVar4) {
        iVar1 = *piVar4;
      }
      iVar3 = iVar3 + 1;
      unaff_ESI[0x45] = iVar1;
      piVar4 = piVar4 + 0x15;
    } while (iVar3 < unaff_ESI[9]);
  }
  local_8 = 0;
  unaff_ESI[0x46] = 8;
  if (0 < unaff_ESI[9]) {
    puVar5 = (undefined4 *)(unaff_ESI[0x31] + 0x1c);
    do {
      puVar5[2] = 8;
      uVar2 = FUN_0048e6bf();
      *puVar5 = uVar2;
      uVar2 = FUN_0048e6bf();
      puVar5[1] = uVar2;
      uVar2 = FUN_0048e6bf();
      puVar5[3] = uVar2;
      uVar2 = FUN_0048e6bf();
      puVar5[0xc] = 0;
      local_8 = local_8 + 1;
      puVar5[4] = uVar2;
      *(undefined1 *)(puVar5 + 5) = 1;
      puVar5 = puVar5 + 0x15;
    } while (local_8 < unaff_ESI[9]);
  }
  iVar3 = FUN_0048e6bf();
  unaff_ESI[0x47] = iVar3;
  if ((unaff_ESI[9] <= unaff_ESI[0x49]) && ((char)unaff_ESI[0x32] == '\0')) {
    *(undefined1 *)(unaff_ESI[100] + 0x10) = 0;
    return;
  }
  *(undefined1 *)(unaff_ESI[100] + 0x10) = 1;
  return;
}

