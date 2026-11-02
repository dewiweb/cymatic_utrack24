// rea decompile_all
// name: FUN_00615590
// address: 0x615590
// body: available
// range: 0x615590-0x6157a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615590(void)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *in_EDX;
  int iVar5;
  byte bVar6;
  int iVar7;
  int local_c;
  
  iVar5 = -1;
  iVar3 = *in_EDX;
  iVar7 = *(int *)in_EDX[2];
  local_c = ((int *)in_EDX[2])[3];
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 0x1450) = 0;
  *(undefined4 *)(in_ECX + 0x1454) = 0x23d;
  if (0 < local_c) {
    do {
      if (*(short *)(iVar3 + iVar4 * 4) == 0) {
        *(undefined2 *)(iVar3 + 2 + iVar4 * 4) = 0;
      }
      else {
        *(int *)(in_ECX + 0x1450) = *(int *)(in_ECX + 0x1450) + 1;
        *(int *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1450) * 4) = iVar4;
        *(undefined1 *)(iVar4 + 0x1458 + in_ECX) = 0;
        iVar5 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
  }
  iVar4 = *(int *)(in_ECX + 0x1450);
  while (iVar4 < 2) {
    if (iVar5 < 2) {
      iVar4 = iVar5 + 1;
      iVar5 = iVar4;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(in_ECX + 0x1450) = *(int *)(in_ECX + 0x1450) + 1;
    *(int *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1450) * 4) = iVar4;
    *(undefined2 *)(iVar3 + iVar4 * 4) = 1;
    *(undefined1 *)(in_ECX + 0x1458 + iVar4) = 0;
    *(int *)(in_ECX + 0x16a8) = *(int *)(in_ECX + 0x16a8) + -1;
    if (iVar7 != 0) {
      *(int *)(in_ECX + 0x16ac) =
           *(int *)(in_ECX + 0x16ac) - (uint)*(ushort *)(iVar7 + 2 + iVar4 * 4);
    }
    iVar4 = *(int *)(in_ECX + 0x1450);
  }
  in_EDX[1] = iVar5;
  for (iVar7 = *(int *)(in_ECX + 0x1450) / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_00615a60(iVar7);
  }
  do {
    iVar7 = *(int *)(in_ECX + 0xb60);
    *(undefined4 *)(in_ECX + 0xb60) =
         *(undefined4 *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1450) * 4);
    *(int *)(in_ECX + 0x1450) = *(int *)(in_ECX + 0x1450) + -1;
    FUN_00615a60(1);
    iVar5 = *(int *)(in_ECX + 0xb60);
    *(int *)(in_ECX + 0x1454) = *(int *)(in_ECX + 0x1454) + -1;
    psVar1 = (short *)(iVar3 + iVar5 * 4);
    *(int *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1454) * 4) = iVar7;
    *(int *)(in_ECX + 0x1454) = *(int *)(in_ECX + 0x1454) + -1;
    *(int *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1454) * 4) = iVar5;
    *(short *)(iVar3 + local_c * 4) = *psVar1 + *(short *)(iVar3 + iVar7 * 4);
    bVar6 = *(byte *)(in_ECX + 0x1458 + iVar5);
    bVar2 = *(byte *)(in_ECX + 0x1458 + iVar7);
    if (bVar6 <= bVar2) {
      bVar6 = bVar2;
    }
    *(byte *)(in_ECX + 0x1458 + local_c) = bVar6 + 1;
    psVar1[1] = (short)local_c;
    *(short *)(iVar3 + 2 + iVar7 * 4) = (short)local_c;
    *(int *)(in_ECX + 0xb60) = local_c;
    local_c = local_c + 1;
    FUN_00615a60(1);
  } while (1 < *(int *)(in_ECX + 0x1450));
  *(int *)(in_ECX + 0x1454) = *(int *)(in_ECX + 0x1454) + -1;
  *(undefined4 *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1454) * 4) = *(undefined4 *)(in_ECX + 0xb60);
  FUN_00615850();
  FUN_006157b0(in_ECX + 0xb3c);
  return;
}

