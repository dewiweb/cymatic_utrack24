// rea decompile_all
// name: FUN_005251e0
// address: 0x5251e0
// body: available
// range: 0x5251e0-0x52545e inclusive
// range: 0x525461-0x5254b9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005251e0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d015c;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (2 < *(int *)(*in_ECX + 0x170)) {
    local_14 = in_ECX[3];
LAB_00525225:
    if (local_14 != 0) {
      uVar3 = FUN_00501d60();
      (**(code **)(*(int *)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 0xc)) + 0xcc))
                (0x104,uVar3);
      if ((local_14 != *(int *)(*in_ECX + 0x140)) &&
         (*(short *)(local_14 + 0x48) != *(short *)(*in_ECX + 0x150))) {
        FUN_00527610(local_14 + 0x48);
        *(undefined2 *)(local_14 + 0x48) = *(undefined2 *)(*in_ECX + 0x150);
        if (*(int *)(*in_ECX + 0x170) == 4) {
          *(undefined2 *)(local_14 + 0x4a) = *(undefined2 *)(*in_ECX + 0x15c);
          cVar1 = FUN_005039a0();
          if (cVar1 != '\0') {
            FUN_00501e80(*in_ECX + 0x160);
          }
        }
        cVar1 = FUN_00501bd0();
        if ((cVar1 != '\0') && (cVar1 = FUN_005039a0(), cVar1 != '\0')) {
          (**(code **)(*(int *)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 0xc)) + 0xbc)
          )(local_1c,1);
          local_8 = 0;
          uVar3 = FUN_00501d60();
          (**(code **)(*(int *)(*in_ECX + 0xc + *(int *)(*(int *)(*in_ECX + 0xc) + 4)) + 0x20))
                    (uVar3);
          local_8 = 0xffffffff;
          FUN_00501900();
        }
        iVar4 = FUN_005272e0(local_14);
        if (iVar4 == 0) {
          FUN_0050b400();
          local_14 = 0;
        }
      }
      if (local_14 != 0) {
        if (*(int *)(local_14 + 0x11c) == 0) {
          if (*(int *)(local_14 + 0x120) == 0) {
            for (; local_14 != 0; local_14 = *(int *)(local_14 + 0x114)) {
              if ((*(int *)(local_14 + 0x114) != 0) &&
                 (*(int *)(*(int *)(local_14 + 0x114) + 0x120) != 0)) {
                local_14 = *(int *)(*(int *)(local_14 + 0x114) + 0x120);
                break;
              }
            }
          }
          else {
            local_14 = *(int *)(local_14 + 0x120);
          }
        }
        else {
          local_14 = *(int *)(local_14 + 0x11c);
        }
      }
      goto LAB_00525225;
    }
    if (*(int *)(*in_ECX + 0x170) == 5) {
      *(undefined4 *)(*in_ECX + 0x170) = 3;
    }
    else {
      *(undefined4 *)(*in_ECX + 0x118) = 2;
      FUN_005254c0(uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

