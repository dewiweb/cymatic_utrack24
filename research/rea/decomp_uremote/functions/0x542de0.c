// rea decompile_all
// name: FUN_00542de0
// address: 0x542de0
// body: available
// range: 0x542de0-0x542ebc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00542de0(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 local_18;
  
  FUN_0054f6b0();
  iVar1 = FUN_0056cd50(**(undefined4 **)(in_ECX + -0x128),param_1,param_2,param_3);
  if (iVar1 != 0) {
    if (iVar1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc);
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + -0x30) + 0x28 +
                         *(int *)(*(int *)(*(int *)(in_ECX + -0x30) + 0x28) + 0xc)) + 0x38))
              (local_18,1);
    (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 8)) + 4))();
  }
  FUN_0054f6f0();
  return;
}

