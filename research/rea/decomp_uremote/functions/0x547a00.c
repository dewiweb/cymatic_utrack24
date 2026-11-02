// rea decompile_all
// name: FUN_00547a00
// address: 0x547a00
// body: available
// range: 0x547a00-0x547c4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00547a9f) */

undefined4 * FUN_00547a00(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d288c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005ed0f0;
    in_ECX[0x28] = &DAT_005efda0;
    in_ECX[0x2b] = &DAT_005efa98;
    in_ECX[0x2e] = &DAT_005eda5c;
    in_ECX[0x25] = CPNS::IObject::vftable;
    in_ECX[0x27] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0xa0) = CPNS::IHookedObject::vftable
    ;
    local_8 = 1;
    FUN_005482a0(0);
    local_8 = 2;
    FUN_00548370(0);
    local_8 = 3;
  }
  FUN_00595780(0x8200,param_1,param_2,1,0);
  *in_ECX = CPCHAI::CAppEventMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CAppEventMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CAppEventMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CAppEventMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CAppEventMessage::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x6c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x74;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x80;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x8c;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  _memset((void *)((int)in_ECX + 0x7a),0,0x10);
  ExceptionList = local_10;
  return in_ECX;
}

