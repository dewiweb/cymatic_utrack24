// rea decompile_all
// name: FUN_00595780
// address: 0x595780
// body: available
// range: 0x595780-0x5959fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0059580e) */

undefined4 *
FUN_00595780(undefined4 param_1,undefined4 param_2,char param_3,char param_4,int param_5)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d662d;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    in_ECX[10] = &DAT_005f00dc;
    in_ECX[0x22] = &DAT_005efda0;
    in_ECX[0x25] = &DAT_005efa98;
    in_ECX[0x1f] = CPNS::IObject::vftable;
    in_ECX[0x21] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x22] + 4) + 0x88) = CPNS::IHookedObject::vftable
    ;
    local_8 = 1;
    FUN_005482a0(0);
    local_8 = 2;
  }
  FUN_0054f350(param_1,param_2,in_ECX,0);
  *in_ECX = CPCHAI::CBaseAppMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CBaseAppMessage::vftable
  ;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CBaseAppMessage::vftable
  ;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CBaseAppMessage::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x54;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x5c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x68;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  in_ECX[0x12] = 0;
  *(undefined2 *)((int)in_ECX + 0x4e) = 0;
  local_8 = 4;
  FUN_00503bc0(uVar1);
  in_ECX[0x18] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined2 *)((int)in_ECX + 0x72) = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  *(byte *)(in_ECX + 0x1d) = *(byte *)(in_ECX + 0x1d) & 0xfe | param_4 != '\0';
  *(byte *)(in_ECX + 0x1d) = *(byte *)(in_ECX + 0x1d) & 0xfd | (param_3 != '\0') << 1;
  ExceptionList = local_10;
  return in_ECX;
}

