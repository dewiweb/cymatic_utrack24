// rea decompile_all
// name: FUN_100047e0
// address: 0x100047e0
// body: available
// range: 0x100047e0-0x10004956 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004952 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100047e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1010e764;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CUsbDriver::vftable;
  iVar2 = param_1[0x18];
  iVar1 = 0;
  local_8 = 4;
  if (0 < iVar2) {
    do {
      if ((iVar1 < 0) || (iVar2 <= iVar1)) goto LAB_10004952;
      FUN_100085b9(*(void **)(param_1[0x17] + iVar1 * 4));
      iVar2 = param_1[0x18];
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  CUIntArray::SetSize((CUIntArray *)(param_1 + 0x16),0,-1);
  iVar2 = param_1[0x1d];
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if ((iVar1 < 0) || (iVar2 <= iVar1)) goto LAB_10004952;
      FUN_100085b9(*(void **)(param_1[0x1c] + iVar1 * 4));
      iVar2 = param_1[0x1d];
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  CUIntArray::SetSize((CUIntArray *)(param_1 + 0x1b),0,-1);
  iVar2 = 0;
  if (0 < (int)param_1[0xe]) {
    do {
      if ((iVar2 < 0) || ((int)param_1[0xe] <= iVar2)) goto LAB_10004952;
      FUN_100085b9(*(void **)(param_1[0xd] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0xe]);
  }
  CUIntArray::SetSize((CUIntArray *)(param_1 + 0xc),0,-1);
  iVar2 = 0;
  if (0 < (int)param_1[0x13]) {
    do {
      if ((iVar2 < 0) || ((int)param_1[0x13] <= iVar2)) {
LAB_10004952:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      FUN_100085b9(*(void **)(param_1[0x12] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x13]);
  }
  CUIntArray::SetSize((CUIntArray *)(param_1 + 0x11),0,-1);
  local_8._0_1_ = 3;
  CPtrArray::~CPtrArray((CPtrArray *)(param_1 + 0x1b));
  local_8._0_1_ = 2;
  CPtrArray::~CPtrArray((CPtrArray *)(param_1 + 0x16));
  local_8._0_1_ = 1;
  CPtrArray::~CPtrArray((CPtrArray *)(param_1 + 0x11));
  local_8 = (uint)local_8._1_3_ << 8;
  CPtrArray::~CPtrArray((CPtrArray *)(param_1 + 0xc));
  local_8 = 0xffffffff;
  FUN_10001200(param_1);
  ExceptionList = local_10;
  return;
}

