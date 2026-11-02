// rea decompile_all
// name: FUN_00423c90
// address: 0x423c90
// body: available
// range: 0x423c90-0x423cba inclusive
// range: 0x423cc0-0x423f49 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00423c90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  short *psVar5;
  int *piVar6;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  
  iVar2 = (int)(double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  piVar6 = (int *)(in_ECX + 0x20);
  psVar5 = &DAT_00c13ad0;
  do {
    iVar1 = (*psVar5 * iVar2) / 0xac44;
    if (iVar1 != *piVar6) {
      piVar6[1] = 0;
      FID_conflict__free((void *)piVar6[-1]);
      iVar3 = FUN_004c554b();
      piVar6[-1] = iVar3;
      *piVar6 = iVar1;
    }
    piVar6[2] = 0;
    _memset((void *)piVar6[-1],0,*piVar6 << 2);
    iVar1 = ((*psVar5 + 0x17) * iVar2) / 0xac44;
    if (iVar1 != piVar6[0x20]) {
      piVar6[0x21] = 0;
      FID_conflict__free((void *)piVar6[0x1f]);
      iVar3 = FUN_004c554b();
      piVar6[0x1f] = iVar3;
      piVar6[0x20] = iVar1;
    }
    piVar6[0x22] = 0;
    _memset((void *)piVar6[0x1f],0,piVar6[0x20] << 2);
    psVar5 = psVar5 + 1;
    piVar6 = piVar6 + 4;
  } while ((int)psVar5 < 0xc13ae0);
  psVar5 = &DAT_00c1395c;
  piVar6 = (int *)(in_ECX + 0x120);
  do {
    iVar1 = (*psVar5 * iVar2) / 0xac44;
    if (iVar1 != *piVar6) {
      piVar6[1] = 0;
      FID_conflict__free((void *)piVar6[-1]);
      iVar3 = FUN_004c554b();
      piVar6[-1] = iVar3;
      *piVar6 = iVar1;
    }
    _memset((void *)piVar6[-1],0,*piVar6 << 2);
    iVar1 = ((*psVar5 + 0x17) * iVar2) / 0xac44;
    if (iVar1 != piVar6[0xc]) {
      piVar6[0xd] = 0;
      FID_conflict__free((void *)piVar6[0xb]);
      iVar3 = FUN_004c554b();
      piVar6[0xb] = iVar3;
      piVar6[0xc] = iVar1;
    }
    _memset((void *)piVar6[0xb],0,piVar6[0xc] << 2);
    psVar5 = psVar5 + 1;
    piVar6 = piVar6 + 3;
  } while ((int)psVar5 < 0xc13964);
  FUN_006f9790((double)CONCAT44(in_XMM1_Db,in_XMM1_Da) * 0.01);
  uVar4 = FUN_004e5970();
  *(undefined4 *)(in_ECX + 0x18c) = uVar4;
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(in_ECX + 0x180);
  *(undefined4 *)(in_ECX + 0x188) = 0;
  *(undefined4 *)(in_ECX + 0x1a0) = uVar4;
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(in_ECX + 0x194);
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  *(undefined4 *)(in_ECX + 0x1b4) = uVar4;
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(in_ECX + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
  *(undefined4 *)(in_ECX + 0x1c8) = uVar4;
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(in_ECX + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c4) = 0;
  *(undefined4 *)(in_ECX + 0x1dc) = uVar4;
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(in_ECX + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  return;
}

