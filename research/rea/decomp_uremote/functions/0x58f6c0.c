// rea decompile_all
// name: FUN_0058f6c0
// address: 0x58f6c0
// body: available
// range: 0x58f6c0-0x58f8ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058f6c0(undefined2 param_1,uint param_2,int param_3,ushort param_4)

{
  int *piVar1;
  int *in_ECX;
  uint local_1c;
  int *local_18;
  ushort local_10;
  char local_5;
  
  if (param_3 == 0) {
    FUN_0058f580();
  }
  if (param_4 < 9) {
    (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a4))
              (param_1);
    local_5 = '\x01';
  }
  else {
    local_10 = param_4 - 8;
    local_5 = '\x01' - (local_10 + param_2 < (uint)in_ECX[1]);
    if (param_2 < (uint)in_ECX[1]) {
      if ((uint)in_ECX[1] <= local_10 + param_2) {
        local_10 = (short)in_ECX[1] - (short)param_2;
      }
      piVar1 = (int *)FUN_005b04d6(local_10 + 8);
      if (piVar1 == (int *)0x0) {
        (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a4))
                  (param_1);
        local_5 = '\x01';
      }
      else {
        local_18 = piVar1;
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
          *(undefined *)local_18 = (&DAT_005ef5cc)[local_1c];
          local_18 = (int *)((int)local_18 + 1);
        }
        *local_18 = in_ECX[1];
        _memcpy(local_18 + 1,(void *)(in_ECX[2] + param_2),(uint)local_10);
        (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x19c))
                  (param_1,0x40,local_10 + param_2,local_10 + 8,local_5,piVar1);
        FUN_005b13e8(piVar1);
      }
    }
    else {
      (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a4))
                (param_1);
    }
  }
  if (local_5 != '\0') {
    FUN_0058f500();
  }
  return;
}

