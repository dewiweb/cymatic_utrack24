// rea decompile_all
// name: FUN_00491590
// address: 0x491590
// body: available
// range: 0x491590-0x491609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00491590(int param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  uint *in_EAX;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  if ((((param_1 == 0) || (in_ECX == (undefined4 *)0x0)) || (in_EDX == (undefined4 *)0x0)) ||
     (((param_2 == (undefined4 *)0x0 || (param_3 == (uint *)0x0)) || (in_EAX == (uint *)0x0)))) {
    uVar3 = 0;
  }
  else {
    *in_EDX = *in_ECX;
    uVar3 = in_ECX[1];
    *param_2 = uVar3;
    bVar1 = *(byte *)(in_ECX + 6);
    *param_3 = (uint)bVar1;
    bVar2 = *(byte *)((int)in_ECX + 0x19);
    *in_EAX = (uint)bVar2;
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(byte *)(in_ECX + 7);
    }
    FUN_0049065b(uVar3,(uint)bVar1,(uint)bVar2,*(undefined1 *)(in_ECX + 7),
                 *(undefined1 *)((int)in_ECX + 0x1a),*(undefined1 *)((int)in_ECX + 0x1b));
    uVar3 = 1;
  }
  return uVar3;
}

