// rea decompile_all
// name: FUN_005940d0
// address: 0x5940d0
// body: available
// range: 0x5940d0-0x594418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005940d0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_6c;
  int local_64;
  undefined4 *local_44;
  undefined4 *local_28;
  ushort local_20;
  ushort local_18;
  ushort local_10;
  char local_c [7];
  byte local_5;
  
  if ((*(int *)(in_ECX + 0x38) == 0) ||
     ((**(code **)(**(int **)(in_ECX + 0x38) + 4))(param_1,param_2,param_3),
     *(char *)(in_ECX + 0x40) == '\0')) {
    if (param_3 == 1) {
      *(undefined4 *)(in_ECX + 0x5c) = 0;
      iVar2 = (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 0x24))();
      local_5 = (**(code **)(*(int *)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc)) + 0x24)
                )();
      if ((local_5 != 0) && (local_5 < 0x11)) {
        local_c[0] = local_5 + 0xaf;
        local_c[1] = 0x7b;
        local_c[2] = 0;
        local_10 = 0;
        while( true ) {
          local_28 = (undefined4 *)0x0;
          if (local_10 < *(ushort *)(in_ECX + 0x34)) {
            local_28 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_10 * 4);
          }
          local_10 = local_10 + 1;
          if (local_28 == (undefined4 *)0x0) break;
          FUN_00515830();
          if (*(int *)(in_ECX + 0x18) == 0) {
            local_64 = 0;
          }
          else {
            local_64 = *(int *)(in_ECX + 0x18) + 0x28 +
                       *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
          }
          (**(code **)*local_28)(local_64,3,local_c,&DAT_0095c854);
          FUN_00515860();
        }
        local_c[0] = local_5 + 0xaf;
        local_c[1] = 0x79;
        local_c[2] = 0;
        local_18 = 0;
        while( true ) {
          local_44 = (undefined4 *)0x0;
          if (local_18 < *(ushort *)(in_ECX + 0x34)) {
            local_44 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_18 * 4);
          }
          local_18 = local_18 + 1;
          if (local_44 == (undefined4 *)0x0) break;
          FUN_00515830();
          if (*(int *)(in_ECX + 0x18) == 0) {
            local_6c = 0;
          }
          else {
            local_6c = *(int *)(in_ECX + 0x18) + 0x28 +
                       *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
          }
          (**(code **)*local_44)(local_6c,3,local_c,&DAT_0095c854);
          FUN_00515860();
        }
      }
    }
    *(undefined1 *)(in_ECX + 0x50) = 0;
    for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
      piVar3 = (int *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28 +
                                           *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc))
                                  + 0x124))(local_20);
      cVar1 = (**(code **)(*piVar3 + 0x6c))();
      if (cVar1 != '\0') {
        *(undefined1 *)(in_ECX + 0x50) = 1;
        return;
      }
    }
  }
  return;
}

