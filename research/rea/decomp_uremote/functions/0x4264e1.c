// rea decompile_all
// name: FUN_004264e1
// address: 0x4264e1
// body: available
// range: 0x4264e1-0x426609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004264e1(int param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  sbyte sVar3;
  uint extraout_ECX;
  uint uVar4;
  undefined8 uVar5;
  int local_c;
  uint local_8;
  
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 == 0x8e) {
    *(undefined4 *)(in_EAX + 0x2c0) = 0;
  }
  else if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 != 0) {
    return 0x90;
  }
  if (*(short *)(in_EAX + 0xd2) == 0) {
    sVar3 = 1;
    if (local_8 < 0x20000) {
      uVar2 = local_8 >> 1;
      goto LAB_00426573;
    }
  }
  else {
    sVar3 = 2;
    if (local_8 < 0x40000) {
      uVar2 = local_8 >> 2;
LAB_00426573:
      *(uint *)(in_EAX + 0x2dc) = uVar2;
      uVar2 = *(uint *)(in_EAX + 0x10) + 1;
      if ((*(uint *)(in_EAX + 0x2dc) != uVar2) &&
         (*(uint *)(in_EAX + 0x2dc) <= *(uint *)(in_EAX + 0x10))) {
        uVar5 = FUN_004d021d();
        local_c = 0x7fffffff;
        for (uVar4 = (uint)((ulonglong)uVar5 >> 0x20); uVar4 < extraout_ECX; uVar4 = uVar4 + 0x10) {
          iVar1 = *(int *)(uVar4 + 8) - (int)uVar5;
          if ((0 < iVar1) && (iVar1 < local_c)) {
            local_c = iVar1;
          }
        }
        if (uVar4 == extraout_ECX) {
          local_c = *(int *)(param_1 + 4) - (int)uVar5;
        }
        if ((int)(uVar2 << sVar3) <= local_c) {
          *(uint *)(in_EAX + 0x2dc) = uVar2;
        }
      }
      iVar1 = FUN_0041117c(in_EAX + 0x2e0);
      return iVar1;
    }
  }
  return 8;
}

