// rea decompile_all
// name: FUN_0056af60
// address: 0x56af60
// body: available
// range: 0x56af60-0x56b1f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0056aff0) */

undefined4 * FUN_0056af60(undefined4 param_1,undefined1 param_2,byte param_3,int param_4)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d46a3;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    in_ECX[10] = &DAT_005ee990;
    in_ECX[0x40] = &DAT_005efda0;
    in_ECX[0x43] = &DAT_005efa98;
    in_ECX[0x3d] = CPNS::IObject::vftable;
    in_ECX[0x3f] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x40] + 4) + 0x100) =
         CPNS::IHookedObject::vftable;
    local_8 = 1;
    FUN_005482a0(0);
    local_8 = 2;
  }
  FUN_00595780(0x82ff,param_1,param_2,(param_3 & 0x80) != 0,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CAppInternalControlMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CAppInternalControlMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CAppInternalControlMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CAppInternalControlMessage::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0xcc;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0xd4;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0xe0;
  *(byte *)(in_ECX + 0x1e) = param_3;
  *(undefined2 *)((int)in_ECX + 0x8a) = 0;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 0x23) = 0;
  *(undefined2 *)((int)in_ECX + 0x8e) = 0;
  FUN_00503bc0(uVar1);
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  *(undefined2 *)(in_ECX + 0x2a) = 0;
  FUN_00504000();
  FUN_005017d0();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_005057a0();
  in_ECX[0x2d] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

