// rea decompile_all
// name: FUN_006f1d90
// address: 0x6f1d90
// body: available
// range: 0x6f1d90-0x6f1eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f1d90(void)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729869;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar5 = in_ECX[2];
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while ((ExceptionList = ppvVar2, 0 < iVar5 &&
         (*(int *)(*(int *)(*in_ECX + -4 + iVar5 * 4) + 8) == 0))) {
    if (iVar5 == 1) {
LAB_006f1de4:
      FUN_004b6eb0(uVar3);
      if (in_ECX[1] != 0) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
        in_ECX[1] = 0;
      }
      in_ECX[2] = 0;
    }
    else {
      iVar1 = *(int *)(*in_ECX + -8 + iVar5 * 4);
      if (*(int *)(iVar1 + 0xc) != *(int *)(iVar1 + 8)) break;
      if (iVar5 < 2) goto LAB_006f1de4;
      FUN_004b6aa0(iVar5 + -1,1,iVar1);
    }
    iVar5 = in_ECX[2];
    ppvVar2 = ExceptionList;
  }
  if (((0 < in_ECX[2]) && (iVar5 = *(int *)(*in_ECX + -4 + in_ECX[2] * 4), iVar5 != 0)) &&
     (*(int *)(iVar5 + 0xc) != *(int *)(iVar5 + 8))) {
    operator_new(0x10);
    local_8 = 0;
    uVar4 = FUN_004b4080(&DAT_00c011ec,&DAT_00c011ec,0,0,*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8));
    iVar5 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar5) {
      FUN_00409cf0(iVar5 / 2 + in_ECX[2] + 9 & 0xfffffff8);
    }
    iVar5 = in_ECX[2];
    in_ECX[2] = iVar5 + 1;
    *(undefined4 *)(*in_ECX + iVar5 * 4) = uVar4;
  }
  ExceptionList = local_10;
  return;
}

