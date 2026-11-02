// rea decompile_all
// name: FUN_00520420
// address: 0x520420
// body: available
// range: 0x520420-0x5206ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520420(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined1 local_94 [12];
  int local_88;
  undefined1 local_84 [12];
  int local_78;
  uint local_74;
  undefined1 local_70 [88];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfc40;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(short *)((int)in_ECX + 6) != 0) && (0x3b5 < (uint)(param_1 - in_ECX[2]))) {
    in_ECX[2] = param_1;
    local_18 = (int)(uint)*(ushort *)((int)in_ECX + 6) >> 3;
    if (local_18 == 0) {
      local_18 = 1;
    }
    local_14 = *(int *)(*(int *)*in_ECX + 0x2c);
    FUN_00512300(uVar2);
    local_8 = 0;
    uVar5 = *(undefined4 *)(local_14 + 0xd8);
    uVar3 = FUN_0052dce0(local_84);
    FUN_005350f0(uVar5,2,uVar3);
    iVar4 = FUN_0052f3a0(local_18);
    if (iVar4 == 0) {
      for (; local_18 != 0; local_18 = local_18 + -1) {
        if (*(ushort *)((int)in_ECX + 6) <= *(ushort *)(in_ECX + 3)) {
          *(undefined2 *)(in_ECX + 3) = 0;
        }
        local_88 = *(int *)(*in_ECX + (uint)*(ushort *)(in_ECX + 3) * 4);
        *(short *)(in_ECX + 3) = (short)in_ECX[3] + 1;
        uVar5 = (**(code **)(*(int *)(local_88 + 0x28 + *(int *)(*(int *)(local_88 + 0x28) + 0xc)) +
                            8))(local_94);
        uVar5 = FUN_00503c30(uVar5,0);
        FUN_0052f410(uVar5);
      }
      FUN_00529f40(local_70,0);
      for (local_74 = 0; local_74 < *(ushort *)((int)in_ECX + 6); local_74 = local_74 + 1) {
        local_78 = *(int *)(*in_ECX + local_74 * 4);
        cVar1 = (*(code *)**(undefined4 **)
                            (local_78 + 0x28 + *(int *)(*(int *)(local_78 + 0x28) + 0xc)))();
        if ((cVar1 != '\0') && (*(short *)(local_78 + 100) != 0)) {
          FUN_0052d2e0(local_78 + 0x6c,0x1203,*(undefined2 *)(local_78 + 0x68),0,0,0,0,&DAT_0095c854
                      );
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

