// rea decompile_all
// name: CFileDialog::XFileDialogEvents::OnShareViolation
// address: 0x1001d1fa
// body: available
// range: 0x1001d1fa-0x1001d298 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d21f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall CFileDialog::XFileDialogEvents::OnShareViolation(struct
   IFileDialog *,struct IShellItem *,enum tagFDE_SHAREVIOLATION_RESPONSE *)
   
   Library: Visual Studio 2010 Release */

long CFileDialog::XFileDialogEvents::OnShareViolation
               (IFileDialog *param_1,IShellItem *param_2,tagFDE_SHAREVIOLATION_RESPONSE *param_3)

{
  IFileDialog *pIVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_10 [8];
  int local_8;
  
  pIVar1 = param_1;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_10,*(AFX_MODULE_STATE **)(param_1 + -0x324));
  param_1 = (IFileDialog *)0x0;
  if (param_3 != (tagFDE_SHAREVIOLATION_RESPONSE *)0x0) {
    iVar2 = (**(code **)(*param_3 + 0x14))(param_3,0x80058000,&param_1);
    if (-1 < iVar2) {
      FUN_10006ce0(&local_8,(short *)param_1);
      CoTaskMemFree(param_1);
      iVar2 = (**(code **)(*(int *)(pIVar1 + -0x340) + 0x18c))(local_8);
      if (in_stack_00000010 != (undefined4 *)0x0) {
        if (iVar2 == 0) {
          *in_stack_00000010 = 0;
        }
        else {
          uVar3 = 1;
          if (iVar2 != 1) {
            uVar3 = 2;
            if (iVar2 != 2) goto LAB_1001d280;
          }
          *in_stack_00000010 = uVar3;
        }
LAB_1001d280:
        FUN_10001030((undefined4 *)(local_8 + -0x10));
        FUN_1000a3b1((ULONG_PTR *)local_10);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

