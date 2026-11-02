// rea decompile_all
// name: FUN_00528070
// address: 0x528070
// body: available
// range: 0x528070-0x52827d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00528070(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined1 local_b0 [8];
  undefined2 local_a8;
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined1 local_98 [2];
  undefined2 local_96;
  undefined2 local_8c [6];
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d01b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_005017d0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00501f30(&DAT_0091717c);
  FUN_005026d0(*in_ECX + 0xd0);
  FUN_00502720(&DAT_005e9ed0);
  FUN_00502720(param_4);
  FUN_00503c60(param_1);
  cVar2 = FUN_00503fe0();
  if (cVar2 != '\0') {
    FUN_0052dce0(local_8c);
    local_80 = local_8c[0];
    FUN_0052dce0(local_98);
    local_7e = local_96;
    FUN_0052dce0(local_a4);
    local_7c = local_a0;
    FUN_0052dce0(local_b0);
    local_78 = local_a8;
  }
  uVar1 = *(undefined4 *)(*in_ECX + 0xd8);
  uVar4 = FUN_00501d60(param_5);
  FUN_00532770(uVar1,&local_80,(char)in_ECX[1],param_2,param_3,uVar4,param_5);
  uVar3 = FUN_00529f40(local_68,1);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return uVar3;
}

