// rea decompile_all
// name: FUN_00647160
// address: 0x647160
// body: available
// range: 0x647160-0x64730e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64730a to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647160(void)

{
  size_t _Size;
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  void *_Dst;
  int in_ECX;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(in_ECX + 0x110) * (uint)*(byte *)(in_ECX + 0x10d);
  if (uVar5 < 8) {
    uVar2 = *(int *)(in_ECX + 0xb4) * uVar5 + 7 >> 3;
  }
  else {
    uVar2 = (uVar5 >> 3) * *(int *)(in_ECX + 0xb4);
  }
  _Size = uVar2 + 1;
  *(char *)(in_ECX + 0x112) = (char)uVar5;
  *(undefined1 *)(in_ECX + 0x113) = *(undefined1 *)(in_ECX + 0x10e);
  if (_Size != 0) {
    puVar3 = (undefined1 *)FUN_004c554b(_Size);
    if (puVar3 != (undefined1 *)0x0) {
      bVar1 = *(byte *)(in_ECX + 0x10a);
      *(undefined1 **)(in_ECX + 0xd8) = puVar3;
      *puVar3 = 0;
      if ((bVar1 & 0x10) != 0) {
        iVar4 = *(int *)(in_ECX + 0xc4) + 1;
        if (iVar4 == 0) goto LAB_00647308;
        puVar3 = (undefined1 *)FUN_004c554b(iVar4);
        if (puVar3 == (undefined1 *)0x0) goto LAB_00647308;
        *(undefined1 **)(in_ECX + 0xdc) = puVar3;
        *puVar3 = 1;
      }
      if ((*(byte *)(in_ECX + 0x10a) & 0xe0) != 0) {
        _Dst = (void *)FUN_004c554b(_Size);
        if (_Dst == (void *)0x0) goto LAB_00647308;
        _memset(_Dst,0,_Size);
        *(void **)(in_ECX + 0xd4) = _Dst;
        if ((*(byte *)(in_ECX + 0x10a) & 0x20) != 0) {
          iVar4 = *(int *)(in_ECX + 0xc4) + 1;
          if (iVar4 == 0) goto LAB_00647308;
          puVar3 = (undefined1 *)FUN_004c554b(iVar4);
          if (puVar3 == (undefined1 *)0x0) goto LAB_00647308;
          *(undefined1 **)(in_ECX + 0xe0) = puVar3;
          *puVar3 = 2;
        }
        if ((*(byte *)(in_ECX + 0x10a) & 0x40) != 0) {
          iVar4 = *(int *)(in_ECX + 0xc4) + 1;
          if (iVar4 == 0) goto LAB_00647308;
          puVar3 = (undefined1 *)FUN_004c554b(iVar4);
          if (puVar3 == (undefined1 *)0x0) goto LAB_00647308;
          *(undefined1 **)(in_ECX + 0xe4) = puVar3;
          *puVar3 = 3;
        }
        if (*(char *)(in_ECX + 0x10a) < '\0') {
          iVar4 = *(int *)(in_ECX + 0xc4) + 1;
          if (iVar4 != 0) {
            puVar3 = (undefined1 *)FUN_004c554b(iVar4);
            if (puVar3 != (undefined1 *)0x0) {
              *(undefined1 **)(in_ECX + 0xe8) = puVar3;
              *puVar3 = 4;
              goto LAB_006472be;
            }
          }
          goto LAB_00647308;
        }
      }
LAB_006472be:
      if ((*(char *)(in_ECX + 0x108) != '\0') && ((*(byte *)(in_ECX + 0x30) & 2) == 0)) {
        *(uint *)(in_ECX + 0xbc) = *(int *)(in_ECX + 0xb8) + 7U >> 3;
        *(uint *)(in_ECX + 0xc0) = *(int *)(in_ECX + 0xb4) + 7U >> 3;
        return;
      }
      *(int *)(in_ECX + 0xbc) = *(int *)(in_ECX + 0xb8);
      *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(in_ECX + 0xb4);
      return;
    }
  }
LAB_00647308:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

