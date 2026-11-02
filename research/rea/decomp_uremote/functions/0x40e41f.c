// rea decompile_all
// name: FUN_0040e41f
// address: 0x40e41f
// body: available
// range: 0x40e41f-0x40e467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e41f(int param_1,undefined4 param_2)

{
  int in_EAX;
  int *unaff_ESI;
  int iVar1;
  int local_8;
  
  if (in_EAX == 0) {
    iVar1 = 0x21;
  }
  else {
    if (param_1 != 0) {
      *unaff_ESI = 0;
      FUN_00411912(0x28,&local_8);
      if (local_8 == 0) {
        iVar1 = FUN_00411045(param_2);
        *(code **)(iVar1 + 0x18) = FUN_0040e403;
        *unaff_ESI = iVar1;
      }
      return local_8;
    }
    iVar1 = 6;
  }
  return iVar1;
}

