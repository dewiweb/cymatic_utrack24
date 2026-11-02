// rea decompile_all
// name: FUN_00432289
// address: 0x432289
// body: available
// range: 0x432289-0x432437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00432289(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_24 [8];
  int local_1c;
  code *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = *(undefined4 *)(param_2 + 0x1c);
  local_8 = 2;
  iVar2 = FUN_00411912(0x2c,&local_8);
  if ((local_8 != 0) || (local_8 = FUN_004111b5(), local_8 != 0)) goto LAB_00432422;
  local_c = (undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(iVar2 + 4) = *local_c;
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x1d0);
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (*(undefined4 **)(iVar1 + 0x18) == (undefined4 *)0x0) {
LAB_004323b2:
    *local_c = *(undefined4 *)(iVar2 + 4);
    local_c[1] = *(undefined4 *)(iVar2 + 8);
    local_c[2] = *(undefined4 *)(iVar2 + 0xc);
    local_c[3] = *(undefined4 *)(iVar2 + 0x10);
    *(int *)(param_1 + 0x34) = (int)*(short *)(iVar2 + 6);
    *(int *)(param_1 + 0x38) = (int)*(short *)(iVar2 + 10);
    *(int *)(param_1 + 0x3c) = *(int *)(iVar2 + 0xc) + 0xffff >> 0x10;
    *(int *)(param_1 + 0x40) = *(int *)(iVar2 + 0x10) + 0xffff >> 0x10;
    *(short *)(param_1 + 0x46) = (short)((uint)(*(int *)(iVar2 + 0x14) + 0x8000) >> 0x10);
    *(short *)(param_1 + 0x48) = (short)((uint)(*(int *)(iVar2 + 0x18) + 0x8000) >> 0x10);
    if (*(int *)(iVar2 + 0x28) != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
      *(int *)(param_1 + 0x1ec) = iVar2;
      iVar2 = 0;
    }
  }
  else {
    local_8 = (*(code *)**(undefined4 **)(iVar1 + 0x18))
                        (local_24,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                         *(undefined4 *)(param_2 + 0x24));
    if (local_8 == 0) {
      local_14 = param_1 + 0x84;
      local_18 = FUN_00432061;
      local_1c = iVar2;
      local_8 = (**(code **)(*(int *)(iVar1 + 0x18) + 8))(local_24);
      (**(code **)(*(int *)(iVar1 + 0x18) + 4))(local_24);
    }
    if (local_8 == 2) {
      if (((6 < *(uint *)(param_2 + 4)) && (*(byte *)(*(int *)(param_2 + 0x20) + 1) < 4)) &&
         (*(uint *)(*(int *)(param_2 + 0x20) + 2) == *(uint *)(param_2 + 4))) {
        local_8 = FUN_004320ca(param_1,iVar2);
        goto LAB_004323ac;
      }
    }
    else {
LAB_004323ac:
      if (local_8 == 0) goto LAB_004323b2;
    }
  }
  FUN_00411249();
LAB_00432422:
  if (iVar2 != 0) {
    FUN_0043202b(local_10);
  }
  return local_8;
}

