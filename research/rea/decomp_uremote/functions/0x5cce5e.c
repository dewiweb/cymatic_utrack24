// rea decompile_all
// name: std::ios_base::_Tidy
// address: 0x5cce5e
// body: available
// range: 0x5cce5e-0x5ccea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __cdecl std::ios_base::_Tidy(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall std::ios_base::_Tidy(ios_base *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ios_base *in_stack_00000004;
  
  _Callfns(in_stack_00000004,0);
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005af7b6(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0x20);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005af7b6(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  return;
}

