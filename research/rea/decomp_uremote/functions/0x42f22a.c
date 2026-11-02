// rea decompile_all
// name: FUN_0042f22a
// address: 0x42f22a
// body: available
// range: 0x42f22a-0x42f305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f22a(int param_1,int param_2)

{
  void *_Dst;
  size_t _Size;
  int *piVar1;
  int local_48 [12];
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  (**(code **)(param_2 + 0x3c))(param_2,local_48,4,&local_14);
  if (local_14 < 0) {
    local_8 = 0xa2;
  }
  else if ((local_14 == 0) || (4 < local_14)) {
LAB_0042f2f1:
    local_8 = 3;
  }
  else {
    local_8 = FUN_0042e9fc(param_1,local_14);
    if (local_8 == 0) {
      local_10 = 0;
      local_18 = *(undefined4 *)(param_1 + 100);
      if (0 < local_14) {
        piVar1 = local_48;
        local_c = (undefined4 *)(*(int *)(param_1 + 0x214) + 8);
        do {
          if (*(char *)*piVar1 == '/') {
            *piVar1 = (int)((char *)*piVar1 + 1);
          }
          _Size = piVar1[1] - *piVar1;
          if (_Size == 0) goto LAB_0042f2f1;
          _Dst = (void *)FUN_00411912(_Size + 1,&local_8);
          *local_c = _Dst;
          if (local_8 != 0) break;
          _memcpy(_Dst,(void *)*piVar1,_Size);
          local_c = local_c + 1;
          local_10 = local_10 + 1;
          *(undefined1 *)((int)_Dst + _Size) = 0;
          piVar1 = piVar1 + 3;
        } while (local_10 < local_14);
      }
    }
  }
  *(int *)(param_2 + 0xc) = local_8;
  return;
}

