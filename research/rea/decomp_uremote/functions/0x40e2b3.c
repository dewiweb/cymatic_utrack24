// rea decompile_all
// name: FUN_0040e2b3
// address: 0x40e2b3
// body: available
// range: 0x40e2b3-0x40e3c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e2b3(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int local_14;
  int local_c;
  int local_8;
  
  local_14 = 0;
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar2 = *(undefined4 *)(in_EAX + 8);
  iVar3 = FUN_00411912(*(undefined4 *)(iVar1 + 0x24),&local_8);
  if ((local_8 == 0) && (local_14 = FUN_00411912(0x40,&local_8), local_8 == 0)) {
    *(int *)(iVar3 + 0x80) = local_14;
    *(int *)(iVar3 + 0x60) = in_EAX;
    *(undefined4 *)(iVar3 + 100) = uVar2;
    *(undefined4 *)(iVar3 + 0x68) = param_1;
    *(undefined4 *)(local_14 + 0x34) = 0;
    local_c = 0;
    if (0 < param_3) {
      do {
        if (*(int *)(*(int *)(iVar3 + 0x80) + 0x34) != 0) break;
        if (*(int *)(local_c * 8 + param_4) == 0x696e6372) {
          *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0x34) =
               *(undefined4 *)(local_c * 8 + 4 + param_4);
        }
        local_c = local_c + 1;
      } while (local_c < param_3);
    }
    if ((*(code **)(iVar1 + 0x30) == (code *)0x0) ||
       (local_8 = (**(code **)(iVar1 + 0x30))(param_1,iVar3,param_2,param_3,param_4), local_8 == 0))
    {
      iVar4 = FUN_0040e20b(iVar3);
      if ((iVar4 == 0) || (iVar4 == 0x26)) {
        *param_5 = iVar3;
        iVar4 = local_8;
      }
      local_8 = iVar4;
      if (local_8 == 0) {
        return 0;
      }
    }
  }
  FUN_0040e101(uVar2);
  if (*(code **)(iVar1 + 0x34) != (code *)0x0) {
    (**(code **)(iVar1 + 0x34))(iVar3);
  }
  FUN_00411a5c(local_14);
  FUN_00411a5c(iVar3);
  *param_5 = 0;
  return local_8;
}

