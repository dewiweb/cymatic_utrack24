// rea decompile_all
// name: __init_pointers
// address: 0x5b669f
// body: available
// range: 0x5b669f-0x5b66ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2008 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_005b68d1(uVar1);
  FUN_005c67ae(uVar1);
  FUN_005afd3e(uVar1);
  FUN_005b8fa3(uVar1);
  FUN_005c681d(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_0041f3a2(uVar1);
  __initp_eh_hooks(uVar1);
  PTR___exit_00956290 = (undefined *)__encode_pointer(__exit);
  return;
}

