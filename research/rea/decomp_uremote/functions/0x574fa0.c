// rea decompile_all
// name: FUN_00574fa0
// address: 0x574fa0
// body: available
// range: 0x574fa0-0x5750f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00574fa0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_44;
  int local_40;
  undefined4 *local_24;
  undefined1 local_1c [16];
  undefined4 *local_c;
  ushort local_8;
  
  uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
                    (local_1c);
  FUN_00578200(uVar3);
  iVar1 = *(int *)(in_ECX + 0x2c);
  uVar2 = *(uint *)(iVar1 + 0x590);
  *(uint *)(iVar1 + 0x590) = uVar2 + 1;
  *(uint *)(iVar1 + 0x594) = *(int *)(iVar1 + 0x594) + (uint)(0xfffffffe < uVar2);
  local_8 = 0;
  while( true ) {
    local_24 = (undefined4 *)0x0;
    if (local_8 < *(ushort *)(in_ECX + 0x4c)) {
      local_24 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + (uint)local_8 * 4);
    }
    local_c = local_24;
    local_8 = local_8 + 1;
    if (local_24 == (undefined4 *)0x0) break;
    FUN_00515830();
    if (param_1 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc);
    }
    if (in_ECX == 0) {
      local_44 = 0;
    }
    else {
      local_44 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    (**(code **)*local_c)(local_44,local_40,0);
    FUN_00515860();
  }
  return;
}

