// rea decompile_all
// name: FUN_00488301
// address: 0x488301
// body: available
// range: 0x488301-0x4883b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488301(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  char *in_EAX;
  uint in_ECX;
  int *unaff_ESI;
  
  if ((((0xb < in_ECX) && (*in_EAX == 'A')) && (in_EAX[1] == 'd')) &&
     (((in_EAX[2] == 'o' && (in_EAX[3] == 'b')) && (in_EAX[4] == 'e')))) {
    cVar1 = in_EAX[7];
    cVar2 = in_EAX[8];
    cVar3 = in_EAX[9];
    cVar4 = in_EAX[10];
    bVar5 = in_EAX[0xb];
    iVar6 = *unaff_ESI;
    *(uint *)(iVar6 + 0x18) = (uint)CONCAT11(in_EAX[5],in_EAX[6]);
    *(uint *)(iVar6 + 0x1c) = (uint)CONCAT11(cVar1,cVar2);
    *(uint *)(iVar6 + 0x20) = (uint)CONCAT11(cVar3,cVar4);
    *(uint *)(iVar6 + 0x24) = (uint)bVar5;
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x4c;
    (**(code **)(*unaff_ESI + 4))();
    *(byte *)((int)unaff_ESI + 0x109) = bVar5;
    *(undefined1 *)(unaff_ESI + 0x42) = 1;
    return;
  }
  *(undefined4 *)(*unaff_ESI + 0x14) = 0x4e;
  *(uint *)(*unaff_ESI + 0x18) = in_ECX + param_1;
  (**(code **)(*unaff_ESI + 4))();
  return;
}

