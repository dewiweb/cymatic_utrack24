// rea decompile_all
// name: FUN_004f1efc
// address: 0x4f1efc
// body: available
// range: 0x4f1efc-0x4f1f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004f1efc(int param_1,char param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = (param_2 != '\0') + 1;
  if ((((*(int *)(param_1 + 0x14) == 0) || (iVar2 = FUN_0047e366(), iVar2 < in_ECX)) ||
      (iVar2 = FUN_0047e371(), iVar2 < in_EAX)) || (iVar2 = FUN_0047e3bf(), iVar2 != iVar1)) {
    iVar2 = FUN_005af82d(0xb4);
    if (iVar2 != 0) {
      FUN_004f0ca1(iVar1,in_ECX + 0x1fU & 0xffffffe0,in_EAX + 0x1fU & 0xffffffe0,0);
    }
    FUN_0047e2f2();
    FUN_0049f5e8();
    FUN_004c4d7a();
  }
  FUN_0047479c();
  return (int *)(param_1 + 0x14);
}

