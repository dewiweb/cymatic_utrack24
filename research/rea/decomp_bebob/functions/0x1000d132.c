// rea decompile_all
// name: StringLengthWorkerW
// address: 0x1000d132
// body: available
// range: 0x1000d132-0x1000d164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall StringLengthWorkerW(wchar_t const *,unsigned int,unsigned int *)
   
   Library: Visual Studio 2010 Release */

long StringLengthWorkerW(wchar_t *param_1,uint param_2,uint *param_3)

{
  short *in_EAX;
  long lVar1;
  int in_EDX;
  int iVar2;
  int *unaff_EDI;
  
  lVar1 = 0;
  iVar2 = in_EDX;
  if (in_EDX != 0) {
    do {
      if (*in_EAX == 0) break;
      in_EAX = in_EAX + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar2 != 0) goto LAB_1000d153;
  }
  lVar1 = -0x7ff8ffa9;
LAB_1000d153:
  if (unaff_EDI != (int *)0x0) {
    if (-1 < lVar1) {
      *unaff_EDI = in_EDX - iVar2;
      return lVar1;
    }
    *unaff_EDI = 0;
  }
  return lVar1;
}

