// rea decompile_all
// name: FUN_00518140
// address: 0x518140
// body: available
// range: 0x518140-0x51835d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005181c6) */
/* WARNING: Removing unreachable block (ram,0x00518220) */

undefined4 *
FUN_00518140(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,int param_5
            )

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf533;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    in_ECX[10] = &DAT_005e9a18;
    in_ECX[0x1b] = &DAT_005efda0;
    in_ECX[0x1e] = &DAT_005ea7d8;
    in_ECX[0x18] = CPNS::IObject::vftable;
    in_ECX[0x1a] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x1b] + 4) + 0x6c) = CPNS::IHookedObject::vftable
    ;
    in_ECX[0x1d] = CPNS::IIndexList::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x1e] + 4) + 0x78) = CPNS::IIndexList::vftable;
    local_8 = 2;
  }
  FUN_0054f350(9,param_1,in_ECX,0);
  *in_ECX = CPCHAI::CIndexList::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CIndexList::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CIndexList::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CIndexList::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x38;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x40;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x4c;
  *(undefined2 *)(in_ECX + 0x12) = param_2;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = param_3;
  *(undefined2 *)(in_ECX + 0x15) = param_4;
  ExceptionList = local_10;
  return in_ECX;
}

