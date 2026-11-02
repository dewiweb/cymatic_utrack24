// rea decompile_all
// name: FUN_00484941
// address: 0x484941
// body: available
// range: 0x484941-0x484ab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484941(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_ESI;
  
  iVar2 = unaff_ESI[9];
  if (iVar2 == 1) {
    unaff_ESI[10] = 1;
    unaff_ESI[0xb] = 1;
    goto LAB_00484a72;
  }
  if (iVar2 == 3) {
    if ((char)unaff_ESI[0x40] == '\0') {
      if ((char)unaff_ESI[0x42] == '\0') {
        piVar3 = (int *)unaff_ESI[0x31];
        iVar2 = *piVar3;
        iVar4 = piVar3[0x15];
        iVar5 = piVar3[0x2a];
        if (iVar2 == 1) {
          if ((iVar4 != 2) || (iVar5 != 3)) goto LAB_00484a24;
        }
        else {
          if (((iVar2 == 0x52) && (iVar4 == 0x47)) && (iVar5 == 0x42)) {
            unaff_ESI[10] = 2;
            goto LAB_00484a48;
          }
LAB_00484a24:
          iVar6 = *unaff_ESI;
          *(int *)(iVar6 + 0x18) = iVar2;
          *(int *)(iVar6 + 0x1c) = iVar4;
          *(int *)(iVar6 + 0x20) = iVar5;
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x6f;
          (**(code **)(*unaff_ESI + 4))();
        }
        unaff_ESI[10] = 3;
      }
      else {
        bVar1 = *(byte *)((int)unaff_ESI + 0x109);
        if (bVar1 != 0) {
          if (bVar1 != 1) {
            *(undefined4 *)(*unaff_ESI + 0x14) = 0x72;
            *(uint *)(*unaff_ESI + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x109);
            (**(code **)(*unaff_ESI + 4))();
          }
          goto LAB_004849b9;
        }
        unaff_ESI[10] = 2;
      }
    }
    else {
LAB_004849b9:
      unaff_ESI[10] = 3;
    }
LAB_00484a48:
    unaff_ESI[0xb] = 2;
    goto LAB_00484a72;
  }
  if (iVar2 != 4) {
    unaff_ESI[10] = 0;
    unaff_ESI[0xb] = 0;
    goto LAB_00484a72;
  }
  if ((char)unaff_ESI[0x42] == '\0') {
LAB_004849a5:
    unaff_ESI[10] = 4;
  }
  else {
    bVar1 = *(byte *)((int)unaff_ESI + 0x109);
    if (bVar1 == 0) goto LAB_004849a5;
    if (bVar1 != 2) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x72;
      *(uint *)(*unaff_ESI + 0x18) = (uint)*(byte *)((int)unaff_ESI + 0x109);
      (**(code **)(*unaff_ESI + 4))();
    }
    unaff_ESI[10] = 5;
  }
  unaff_ESI[0xb] = 4;
LAB_00484a72:
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0x3ff00000;
  unaff_ESI[0xc] = 1;
  unaff_ESI[0xd] = 1;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x41) = 0;
  *(undefined1 *)(unaff_ESI + 0x12) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x49) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x4a) = 0;
  unaff_ESI[0x13] = 2;
  *(undefined1 *)(unaff_ESI + 0x14) = 1;
  unaff_ESI[0x15] = 0x100;
  *(undefined1 *)(unaff_ESI + 0x16) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  return;
}

