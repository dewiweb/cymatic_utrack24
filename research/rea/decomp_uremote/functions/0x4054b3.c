// rea decompile_all
// name: FUN_004054b3
// address: 0x4054b3
// body: available
// range: 0x4054b3-0x405518 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004054b3(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  int local_8;
  
  piVar1 = (int *)FUN_00405362();
  local_8 = 0;
  if (*piVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00411912(8,&local_8);
    if (local_8 == 0) {
      *piVar1 = (int)puVar2;
      *puVar2 = unaff_EDI;
      puVar2[1] = param_1;
      if ((*in_EAX <= in_EAX[2]) && (local_8 = FUN_004053be(param_2), local_8 != 0)) {
        return local_8;
      }
      in_EAX[2] = in_EAX[2] + 1;
    }
  }
  else {
    *(undefined4 *)(*piVar1 + 4) = param_1;
  }
  return local_8;
}

