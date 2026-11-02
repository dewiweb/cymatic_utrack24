// rea decompile_all
// name: FUN_0042e59f
// address: 0x42e59f
// body: available
// range: 0x42e59f-0x42e6e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042e59f(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_EBX;
  int local_10;
  int local_c;
  short local_8 [2];
  
  (*(code *)**(undefined4 **)(in_EAX + 4))();
  unaff_EBX[0x12] = (int)in_ECX;
  unaff_EBX[0x14] = 0;
  unaff_EBX[0x13] = 0;
  unaff_EBX[0x16] = 0;
  unaff_EBX[0x15] = 0;
  *(undefined1 *)(unaff_EBX + 0x17) = 0;
  *(undefined1 *)((int)unaff_EBX + 0x5d) = 0;
  *(undefined1 *)((int)unaff_EBX + 0x5e) = 0;
  iVar1 = FUN_0042e52b("%!PS-AdobeFont",0xe);
  if (iVar1 == 0) {
LAB_0042e60b:
    iVar1 = FUN_0041106d();
    if ((iVar1 != 0) || (local_10 = FUN_0042e4d2(local_8,&local_c), iVar1 = local_10, local_10 != 0)
       ) goto LAB_0042e6ce;
    if (local_8[0] == -0x7fff) {
      *(undefined1 *)(unaff_EBX + 0x17) = 1;
    }
    else {
      local_10 = FUN_0041106d();
      iVar1 = local_10;
      if (local_10 != 0) goto LAB_0042e6ce;
      local_c = in_ECX[1];
    }
    if (in_ECX[5] == 0) {
      iVar1 = in_ECX[2];
      iVar2 = *in_ECX;
      unaff_EBX[0x14] = local_c;
      unaff_EBX[0x13] = iVar1 + iVar2;
      *(undefined1 *)((int)unaff_EBX + 0x5d) = 1;
      iVar1 = FUN_00411095(local_c);
      if (iVar1 != 0) goto LAB_0042e6ce;
    }
    else {
      iVar2 = FUN_00411912(local_c,&local_10);
      unaff_EBX[0x13] = iVar2;
      iVar1 = local_10;
      if ((local_10 != 0) || (iVar1 = FUN_004110b4(iVar2,local_c), iVar1 != 0)) goto LAB_0042e6ce;
      unaff_EBX[0x14] = local_c;
    }
    iVar2 = unaff_EBX[0x13];
    unaff_EBX[1] = iVar2;
    *unaff_EBX = iVar2;
    unaff_EBX[2] = unaff_EBX[0x14] + iVar2;
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_0042e52b("%!FontType",10);
    if (iVar1 != 0) goto LAB_0042e6ce;
    goto LAB_0042e60b;
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_0042e6ce:
  if (*(char *)((int)unaff_EBX + 0x5d) == '\0') {
    FUN_00411a5c(unaff_EBX[0x13]);
    unaff_EBX[0x13] = 0;
  }
  return iVar1;
}

