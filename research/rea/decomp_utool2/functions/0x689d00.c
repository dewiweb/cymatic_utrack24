// rea decompile_all
// name: FUN_00689d00
// address: 0x689d00
// body: available
// range: 0x689d00-0x689df2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00689d00(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + iVar5 * 4);
      iVar2 = FUN_0062c730(*(undefined4 *)(iVar1 + 0xc),0,0);
      if (iVar2 < 0) {
        iVar2 = param_1[2];
        iVar4 = iVar2 + 1;
        if (param_1[1] < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar2 + 2;
          }
          uVar6 = iVar2 + 9 + (iVar4 >> 1) & 0xfffffff8;
          if (param_1[1] != uVar6) {
            if ((int)uVar6 < 1) {
              FID_conflict__free((void *)*param_1);
              *param_1 = 0;
            }
            else if (*param_1 == 0) {
              iVar2 = FUN_004c554b();
              *param_1 = iVar2;
            }
            else {
              iVar2 = FUN_004c553b(*param_1,uVar6 * 4);
              *param_1 = iVar2;
            }
            param_1[1] = uVar6;
          }
        }
        iVar2 = param_1[2];
        param_1[2] = iVar2 + 1;
        piVar3 = (int *)(*param_1 + iVar2 * 4);
        if (piVar3 != (int *)0x0) {
          iVar1 = *(int *)(iVar1 + 0xc);
          *piVar3 = iVar1;
          piVar3 = (int *)(iVar1 + -8);
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x14));
  }
  return param_1;
}

