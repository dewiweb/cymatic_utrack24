// rea decompile_all
// name: GetAssocAt
// address: 0x100456b7
// body: available
// range: 0x100456b7-0x1004570a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: class CMap<int,int,int,int>::CAssoc * __thiscall
   CMap<int,int,int,int>::GetAssocAt(int,unsigned int &,unsigned int &)const 
    protected: class CMap<int,int,unsigned int,unsigned int>::CAssoc * __thiscall
   CMap<int,int,unsigned int,unsigned int>::GetAssocAt(int,unsigned int &,unsigned int &)const 
    protected: class CMap<unsigned int,unsigned int,int,int>::CAssoc * __thiscall CMap<unsigned
   int,unsigned int,int,int>::GetAssocAt(unsigned int,unsigned int &,unsigned int &)const 
    protected: class CMap<unsigned int,unsigned int,unsigned int,unsigned int>::CAssoc * __thiscall
   CMap<unsigned int,unsigned int,unsigned int,unsigned int>::GetAssocAt(unsigned int,unsigned int
   &,unsigned int &)const 
     24 names - too many to list
   
   Library: Visual Studio 2010 Release */

int * __thiscall GetAssocAt(void *this,long param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int *piVar4;
  
  uVar3 = FUN_100034b0(param_1);
  puVar1 = param_3;
  *param_3 = uVar3;
  uVar3 = uVar3 % *(uint *)((int)this + 8);
  *param_2 = uVar3;
  if (*(int *)((int)this + 4) != 0) {
    for (piVar4 = *(int **)(*(int *)((int)this + 4) + uVar3 * 4); piVar4 != (int *)0x0;
        piVar4 = (int *)piVar4[2]) {
      if ((piVar4[3] == *puVar1) &&
         (bVar2 = FUN_100034e0(piVar4,&param_1), CONCAT31(extraout_var,bVar2) != 0)) {
        return piVar4;
      }
    }
  }
  return (int *)0x0;
}

