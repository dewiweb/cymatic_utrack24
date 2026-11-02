// rea decompile_all
// name: FUN_004343e8
// address: 0x4343e8
// body: available
// range: 0x4343e8-0x4344df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004343e8(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_EBX;
  int *local_8;
  
  local_8 = in_ECX;
  (*(code *)**(undefined4 **)(in_EAX + 4))();
  unaff_EBX[0x12] = (int)in_ECX;
  unaff_EBX[0x14] = 0;
  unaff_EBX[0x13] = 0;
  *(undefined1 *)(unaff_EBX + 0x15) = 0;
  piVar2 = (int *)FUN_0041106d();
  if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_004111b5(), piVar2 == (int *)0x0)) {
    iVar3 = _memcmp((void *)in_ECX[8],"%!PS-TrueTypeFont",0x11);
    if (iVar3 != 0) {
      piVar2 = (int *)0x2;
    }
    FUN_00411249();
    if ((piVar2 == (int *)0x0) &&
       (local_8 = (int *)FUN_0041106d(), piVar2 = local_8, local_8 == (int *)0x0)) {
      iVar3 = in_ECX[1];
      if (in_ECX[5] == 0) {
        iVar4 = in_ECX[2];
        iVar1 = *in_ECX;
        unaff_EBX[0x14] = iVar3;
        unaff_EBX[0x13] = iVar4 + iVar1;
        *(undefined1 *)(unaff_EBX + 0x15) = 1;
        piVar2 = (int *)FUN_00411095(iVar3);
        if (piVar2 == (int *)0x0) {
LAB_004344ce:
          iVar3 = unaff_EBX[0x13];
          unaff_EBX[1] = iVar3;
          *unaff_EBX = iVar3;
          unaff_EBX[2] = unaff_EBX[0x14] + iVar3;
          return (int *)0x0;
        }
      }
      else {
        iVar4 = FUN_00411912(iVar3,&local_8);
        unaff_EBX[0x13] = iVar4;
        piVar2 = local_8;
        if ((local_8 == (int *)0x0) &&
           (piVar2 = (int *)FUN_004110b4(iVar4,iVar3), piVar2 == (int *)0x0)) {
          unaff_EBX[0x14] = iVar3;
          goto LAB_004344ce;
        }
      }
    }
  }
  if ((char)unaff_EBX[0x15] == '\0') {
    FUN_00411a5c(unaff_EBX[0x13]);
    unaff_EBX[0x13] = 0;
  }
  return piVar2;
}

