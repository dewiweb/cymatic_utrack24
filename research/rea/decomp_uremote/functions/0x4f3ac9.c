// rea decompile_all
// name: FUN_004f3ac9
// address: 0x4f3ac9
// body: available
// range: 0x4f3ac9-0x4f3b61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3ac9(short param_1)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = 0x4f3ad8;
  FUN_004c751a();
  uStack_10 = 0x4f3ae2;
  FUN_00476147();
  iStack_c = 0x4f3ae7;
  FUN_004f1b01();
  iStack_c = 0x4f3aee;
  cVar1 = (**(code **)(*in_EAX + 0x34))();
  if (cVar1 != '\0') {
    iStack_c = in_EAX[1];
    uStack_10 = 0x4f3afa;
    FUN_004c1613();
    iStack_c = 0x4f3aff;
    FUN_004eda42();
    uStack_10 = 0x4f3b05;
    cVar1 = FUN_004ed52d();
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_004c3360(in_EAX[1],&uStack_10);
  FUN_004c0f4a();
  iStack_c = 0x4f3b2b;
  cVar1 = FUN_004c14d9();
  if (cVar1 == '\0') {
    uStack_10 = 0x4f3b5d;
    FUN_004eda2a();
  }
  else if (param_1 == 2) {
    iStack_c = 0x4f3b3c;
    piVar2 = (int *)FUN_004c1514();
    iStack_c = 0x4f3b46;
    (**(code **)(*piVar2 + 0xa0))();
  }
  else {
    iStack_c = 1;
    uStack_10 = 0x4f3b4f;
    uStack_10 = FUN_004bf254();
    FUN_004c5a2c();
  }
  return;
}

