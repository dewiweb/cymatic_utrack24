// rea decompile_all
// name: FUN_00518920
// address: 0x518920
// body: available
// range: 0x518920-0x518b55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005189a6) */
/* WARNING: Removing unreachable block (ram,0x00518a00) */

undefined4 *
FUN_00518920(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,int param_5
            )

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf663;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    in_ECX[10] = &DAT_005e9adc;
    in_ECX[0x1c] = &DAT_005efda0;
    in_ECX[0x1f] = &DAT_005ea7d8;
    in_ECX[0x19] = CPNS::IObject::vftable;
    in_ECX[0x1b] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x1c] + 4) + 0x70) = CPNS::IHookedObject::vftable
    ;
    in_ECX[0x1e] = CPNS::ISelectorItemList::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x1f] + 4) + 0x7c) =
         CPNS::ISelectorItemList::vftable;
    local_8 = 2;
  }
  FUN_0054f350(10,param_1,in_ECX,0);
  *in_ECX = CPCHAI::CSelectorItemList::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CSelectorItemList::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CSelectorItemList::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CSelectorItemList::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x3c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x44;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x50;
  *(undefined2 *)(in_ECX + 0x12) = param_2;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = param_3;
  *(undefined2 *)(in_ECX + 0x15) = param_4;
  *(undefined2 *)((int)in_ECX + 0x56) = 0xffff;
  *(undefined2 *)(in_ECX + 0x16) = 0xffff;
  ExceptionList = local_10;
  return in_ECX;
}

