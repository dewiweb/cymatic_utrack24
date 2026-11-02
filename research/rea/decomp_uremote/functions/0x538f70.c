// rea decompile_all
// name: FUN_00538f70
// address: 0x538f70
// body: available
// range: 0x538f70-0x539022 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538f70(void)

{
  int in_ECX;
  
  FUN_00539030();
  *(undefined ***)(in_ECX + 0x198) = CPNS::ILocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x19c + *(int *)(*(int *)(in_ECX + 0x19c) + 4)) =
       CPNS::ILocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x19c + *(int *)(*(int *)(in_ECX + 0x19c) + 8)) =
       CPNS::ILocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x18c) = CPNS::IBaseLocalDevice::vftable;
  *(undefined ***)(in_ECX + 400 + *(int *)(*(int *)(in_ECX + 400) + 4)) =
       CPNS::IBaseLocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x180) = CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x184 + *(int *)(*(int *)(in_ECX + 0x184) + 4)) =
       CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x178) = CPNS::IObject::vftable;
  return;
}

