// rea decompile_all
// name: FUN_005a2650
// address: 0x5a2650
// body: available
// range: 0x5a2650-0x5a2ac8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a26de) */
/* WARNING: Removing unreachable block (ram,0x005a273b) */

undefined4 *
FUN_005a2650(undefined2 param_1,int param_2,undefined4 param_3,undefined2 param_4,int param_5,
            undefined2 param_6,undefined2 param_7,undefined2 param_8,int param_9)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined2 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d742d;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_9 != 0) {
    in_ECX[10] = &DAT_005effa4;
    in_ECX[0x21] = &DAT_005efda0;
    in_ECX[0x24] = &DAT_005ea7d8;
    in_ECX[0x1e] = CPNS::IObject::vftable;
    in_ECX[0x20] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x21] + 4) + 0x84) = CPNS::IHookedObject::vftable
    ;
    in_ECX[0x23] = CPNS::IParameter::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x24] + 4) + 0x90) = CPNS::IParameter::vftable;
    local_8 = 2;
  }
  FUN_0054f350(7,*(undefined4 *)(param_2 + 0x2c),in_ECX,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CParameter::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x50;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x58;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -100;
  if (param_5 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = (*(code *)**(undefined4 **)
                           (param_5 + 0x28 + *(int *)(*(int *)(param_5 + 0x28) + 0xc)))(uVar2);
  }
  uVar1 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x24))
                    ();
  *(undefined2 *)((int)in_ECX + 0x4a) = uVar1;
  *(undefined2 *)(in_ECX + 0x12) = param_1;
  *(undefined2 *)(in_ECX + 0x13) = param_4;
  *(undefined2 *)((int)in_ECX + 0x4e) = local_40;
  in_ECX[0x14] = param_2;
  in_ECX[0x15] = param_5;
  FUN_00501870(param_3);
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined2 *)(in_ECX + 0x18) = param_6;
  *(undefined2 *)((int)in_ECX + 0x62) = param_7;
  *(undefined2 *)(in_ECX + 0x19) = param_8;
  in_ECX[0x1c] = 0;
  if (in_ECX[0x15] == 0) {
    *(byte *)((int)in_ECX + 0x6a) = *(byte *)((int)in_ECX + 0x6a) & 0xfe;
    *(byte *)((int)in_ECX + 0x6a) = *(byte *)((int)in_ECX + 0x6a) & 0xfd;
    *(undefined2 *)(in_ECX + 0x1a) = 0;
  }
  else {
    (*(code *)**(undefined4 **)(in_ECX[0x15] + 0x28 + *(int *)(*(int *)(in_ECX[0x15] + 0x28) + 8)))
              ();
    uVar1 = (*(code *)**(undefined4 **)
                        (in_ECX[0x15] + 0x28 + *(int *)(*(int *)(in_ECX[0x15] + 0x28) + 0xc)))();
    uVar3 = FUN_005b04d6(uVar1);
    in_ECX[0x1b] = uVar3;
    uVar2 = (*(code *)**(undefined4 **)
                        (in_ECX[0x15] + 0x28 + *(int *)(*(int *)(in_ECX[0x15] + 0x28) + 0xc)))();
    _memset((void *)in_ECX[0x1b],0,uVar2 & 0xffff);
    uVar2 = (*(code *)**(undefined4 **)
                        (in_ECX[0x15] + 0x28 + *(int *)(*(int *)(in_ECX[0x15] + 0x28) + 0xc)))();
    uVar3 = FUN_005b04d6((uVar2 & 0xffff) * 2);
    in_ECX[0x1a] = uVar3;
    uVar2 = (*(code *)**(undefined4 **)
                        (in_ECX[0x15] + 0x28 + *(int *)(*(int *)(in_ECX[0x15] + 0x28) + 0xc)))();
    _memset((void *)in_ECX[0x1a],0,(uVar2 & 0xffff) << 1);
  }
  ExceptionList = local_10;
  return in_ECX;
}

