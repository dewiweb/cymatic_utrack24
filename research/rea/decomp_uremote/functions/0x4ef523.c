// rea decompile_all
// name: FUN_004ef523
// address: 0x4ef523
// body: available
// range: 0x4ef523-0x4ef5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef523(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int *unaff_ESI;
  
  cVar3 = FUN_004ef4f4();
  if ((char)param_1 == cVar3) {
    return;
  }
  FUN_004ef652(unaff_ESI);
  *(char *)((int)unaff_ESI + 0x86) = (char)param_1;
  cVar3 = FUN_004c044d();
  if (cVar3 == '\0') {
    if ((char)param_1 != '\0') {
      uVar5 = FUN_004c0801();
      FUN_004c07db(extraout_ECX,uVar5);
      FUN_004c09cc(0,0,uVar5);
      goto LAB_004ef5d2;
    }
  }
  else {
    piVar4 = (int *)FUN_004c0453();
    if (piVar4 == (int *)0x0) goto LAB_004ef5d2;
    iVar1 = unaff_ESI[0x28];
    iVar2 = unaff_ESI[0x29];
    (**(code **)(*piVar4 + 0x38))(param_1);
    if ((((char)param_1 != '\0') || (iVar1 < 1)) || (iVar2 < 1)) goto LAB_004ef5d2;
  }
  FUN_004c0c1f();
LAB_004ef5d2:
  (**(code **)(*unaff_ESI + 0x84))();
  return;
}

