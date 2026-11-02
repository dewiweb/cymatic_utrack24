// rea decompile_all
// name: FUN_004fa4ab
// address: 0x4fa4ab
// body: available
// range: 0x4fa4ab-0x4fa581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa4ab(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  int extraout_ECX;
  int *unaff_ESI;
  
  unaff_ESI[1] = in_ECX;
  unaff_ESI[2] = param_1;
  piVar1 = unaff_ESI + 3;
  piVar2 = unaff_ESI + 4;
  *unaff_ESI = in_EAX;
  *piVar1 = 0;
  *piVar2 = 0;
  unaff_ESI[5] = 0;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x19) = 0;
  if (*(code **)(in_EAX + 0x3c) != (code *)0x0) {
    (**(code **)(in_EAX + 0x3c))(1,piVar2);
    (**(code **)(*unaff_ESI + 0x34))(0x8d40,*piVar2);
    glGenTextures(1,piVar1);
    glBindTexture(0xde1,*piVar1);
    glTexParameteri(0xde1,0x2801,0x2601);
    glTexParameteri(0xde1,0x2800,0x2601);
    glTexParameteri(0xde1,0x2802,0x812f);
    glTexParameteri(0xde1,0x2803,0x812f);
    glTexImage2D(0xde1,0,0x1908,unaff_ESI[1],unaff_ESI[2],0,0x1908,0x1401,0);
    (**(code **)(*unaff_ESI + 0x44))(0x8d40,0x8ce0,0xde1,*piVar1,0);
    uVar3 = FUN_0040d13e();
    (**(code **)(extraout_ECX + 0x34))(0x8d40,uVar3);
  }
  return;
}

