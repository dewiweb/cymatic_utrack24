// rea decompile_all
// name: FUN_00405247
// address: 0x405247
// body: available
// range: 0x405247-0x40531f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00405247(int param_1,undefined4 param_2,uint param_3)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [6];
  undefined4 local_c;
  int *local_8;
  
  iVar1 = *(int *)(in_EAX + 0x58);
  if (iVar1 == 0) {
    iVar1 = 6;
  }
  else {
    _memset(local_24,0,0x1c);
    local_24[1] = *(undefined4 *)(iVar1 + 0x10);
    local_24[3] = 0;
    local_24[2] = *(undefined4 *)(iVar1 + 0x14);
    local_24[5] = (int)param_3 >> 0x10 & 0xf;
    local_24[4] = 0;
    local_c = 0;
    iVar1 = FUN_00404a98();
    if ((iVar1 == 0) && (iVar1 = FUN_004012ab(&local_8), iVar1 == 0)) {
      *(int **)(param_1 + 0x84) = local_8;
      if (*(code **)(*local_8 + 0x10) == (code *)0x0) {
        piVar2 = local_24;
        piVar3 = local_8;
        for (iVar1 = 7; piVar3 = piVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar3 = *piVar2;
          piVar2 = piVar2 + 1;
        }
      }
      else {
        (**(code **)(*local_8 + 0x10))(local_8,local_24);
      }
      if ((*(code **)(*local_8 + 0x18) == (code *)0x0) ||
         (iVar1 = (**(code **)(*local_8 + 0x18))(param_1 + 0xc,local_8), iVar1 == 0)) {
        iVar1 = FUN_00404aef(param_1,local_24,param_2,param_3 & 0xfffffffb | 0x801,0);
      }
    }
  }
  return iVar1;
}

