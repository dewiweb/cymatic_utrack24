// rea decompile_all
// name: FUN_0059e450
// address: 0x59e450
// body: available
// range: 0x59e450-0x59e7f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059e450(void)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  bool bVar7;
  int local_58;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7254;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar7 = *(int *)(in_ECX + 0xcc) == 2;
  bVar2 = true;
  do {
    if ((bVar2) || ((*(uint *)(*(int *)(in_ECX + 0xd4) + 0x6c) & 1) == 0)) {
      uVar1 = *(undefined2 *)(in_ECX + 0xd8);
      *(short *)(in_ECX + 0xd8) = *(short *)(in_ECX + 0xd8) + 1;
      iVar4 = FUN_0055bb40(uVar1);
      if ((iVar4 != 0) &&
         ((*(int *)(iVar4 + 0x10) == 1 && (iVar5 = FUN_0059e990(iVar4), iVar5 == 0)))) {
        local_58 = FUN_005af82d(0x18);
        local_8 = 0;
        if (local_58 == 0) {
          local_58 = 0;
        }
        else {
          FUN_005033e0(iVar4);
        }
        local_8 = 0xffffffff;
        if (local_58 == 0) {
          ExceptionList = local_10;
          return;
        }
        FUN_0059ea20(local_58);
        iVar5 = *(int *)(in_ECX + 0xd4);
        uVar6 = FUN_00503c30(iVar4,0);
        (**(code **)(*(int *)(iVar5 + 0x28 + *(int *)(*(int *)(iVar5 + 0x28) + 0xc)) + 0x174))
                  (in_ECX + 0xc0,0x9209,1,0,0,0,0,uVar6);
        ExceptionList = local_10;
        return;
      }
      FUN_0059e800();
    }
    if (*(int *)(in_ECX + 0xcc) == 0) {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0xd4) + 0x28 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 0xd4) + 0x28) + 0xc)) + 0x174))
                (in_ECX + 0xc0,0x9209,0,0,0,0,0,&DAT_0095c854);
      FUN_005442f0(1);
      ExceptionList = local_10;
      return;
    }
    *(undefined2 *)(in_ECX + 0xd8) = 0;
    local_18 = *(int *)(*(int *)(in_ECX + 0xd4) + 0x11c);
    while( true ) {
      do {
        if (((local_18 != 0) && ((bVar7 || ((*(uint *)(local_18 + 0x6c) & 1) == 0)))) ||
           (*(int *)(in_ECX + 0xd4) == *(int *)(in_ECX + 0xd0))) goto LAB_0059e770;
        if (local_18 == 0) {
          local_18 = *(int *)(*(int *)(in_ECX + 0xd4) + 0x120);
        }
        else {
          local_18 = *(int *)(local_18 + 0x120);
        }
      } while (local_18 != 0);
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x114);
      if ((*(int *)(in_ECX + 0xd4) == 0) || (*(int *)(in_ECX + 0xd4) == *(int *)(in_ECX + 0xd0)))
      break;
      local_18 = *(int *)(*(int *)(in_ECX + 0xd4) + 0x120);
    }
    local_18 = 0;
LAB_0059e770:
    if (local_18 == 0) {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0xd4) + 0x28 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 0xd4) + 0x28) + 0xc)) + 0x174))
                (in_ECX + 0xc0,0x9209,0,0,0,0,0,&DAT_0095c854,uVar3);
      FUN_005442f0(1);
      ExceptionList = local_10;
      return;
    }
    *(int *)(in_ECX + 0xd4) = local_18;
    bVar2 = bVar7;
  } while( true );
}

