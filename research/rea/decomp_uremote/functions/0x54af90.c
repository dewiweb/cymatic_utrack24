// rea decompile_all
// name: FUN_0054af90
// address: 0x54af90
// body: available
// range: 0x54af90-0x54b1fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0054b02f) */

undefined4 * FUN_0054af90(undefined4 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2b64;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005ed77c;
    in_ECX[0x2a] = &DAT_005efda0;
    in_ECX[0x2d] = &DAT_005efa98;
    in_ECX[0x30] = &DAT_005eda5c;
    in_ECX[0x27] = CPNS::IObject::vftable;
    in_ECX[0x29] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x2a] + 4) + 0xa8) = CPNS::IHookedObject::vftable
    ;
    local_8 = 1;
    FUN_005482a0(0);
    local_8 = 2;
    FUN_0054b800(0);
    local_8 = 3;
  }
  FUN_00595780(0x8206,param_1,param_2,1,0);
  local_8 = 4;
  *in_ECX = CPCHAI::CAppTextMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CAppTextMessage::vftable
  ;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CAppTextMessage::vftable
  ;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CAppTextMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CAppTextMessage::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x74;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x7c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x88;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x94;
  FUN_005017d0(uVar1);
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  *(undefined2 *)((int)in_ECX + 0x7a) = 0;
  _memset(in_ECX + 0x1f,0,0x10);
  ExceptionList = local_10;
  return in_ECX;
}

